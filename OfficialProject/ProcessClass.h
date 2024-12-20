#ifndef PROCESSCLASS_H
#define PROCESSCLASS_H


#ifndef PROCESS_MANAGEMENT_H
#define PROCESS_MANAGEMENT_H

#endif // PROCESS_MANAGEMENT_H
#include"vector"
class Process{
public:
    int process_id;
    int arrival_time;
    int burst_time;
    int execution_time;
    int waiting_time=0;
    int priority=0;
    int reponsetime=0;
    bool state=false;
    bool has_reached_cpu=false;


    Process(int arrival_time,int burst_time,int priority){

        this->arrival_time=arrival_time;
        this->burst_time=burst_time;
        this->priority=priority;
        execution_time=0;
    }
    Process(int arrival_time,int burst_time){

        this->arrival_time=arrival_time;
        this->burst_time=burst_time;
        execution_time=0;
    }
    Process(){

    }


};
class process_management
{
public:

    int nbprocess=0;
    int Clock;
    int default_quant;
    std::vector<Process*> ReadyProcesses;//stores processes that are ready for running
    std::vector<Process*> WaitingQueue;//stores processess that are not yet ready i.e arrival time > current clock time.
    std::vector<Process*> ZombieProcess;//stores processes that have already been executed
    //0.FIFO
    //1.SJF
    //2.Round Robin
    std::vector<Process*> FCFSResult;
     std::vector<Process*> SJFResult;
      std::vector<Process*> RoundRobinResult;
       std::vector<Process*> PriorityResult;

      std::vector<Process> waitingqueuecopy;


    void addProcess(Process *P){
        P->process_id=nbprocess;

        WaitingQueue.push_back(P);
        //store process value in temp array;
        waitingqueuecopy.push_back(*P);
        nbprocess+=1;

    }



    void printprocess(Process structure){
        qDebug()<<"";
        qDebug()<<"Process id: "<<structure.process_id;
        qDebug()<<"Arrival time: "<<structure.arrival_time;
        qDebug()<<"Burst time: "<<structure.burst_time;
        qDebug()<<"Execution time: "<<structure.execution_time;
        qDebug()<<"Running State: "<<structure.state;
        qDebug()<<"Waiting time: "<<structure.waiting_time;
        qDebug()<<"Priority: "<<structure.priority;
        qDebug()<<"Response time : "<<structure.reponsetime;
        qDebug()<<"";
    }
    void printprocesses(std::vector<Process*> vec){
        for(int i=0;i<=vec.size()-1;i++){
            printprocess(*(vec.at(i)));
        }
    }
    void printrunning(){
        qDebug()<<"Ready processes";
        if(ReadyProcesses.size()>=1){printprocesses(ReadyProcesses);}
        qDebug()<<"Waiting processes";
        if(WaitingQueue.size()>=1){printprocesses(WaitingQueue);}
        qDebug()<<"zombie processes";
        if(ZombieProcess.size()>0){printprocesses(ZombieProcess);}
    }
    void initialise(){
        Clock=0;
        WaitingQueue.clear();
        ZombieProcess.clear();
        ReadyProcesses.clear();
        for(int i=0;i<waitingqueuecopy.size();i++){
            Process *newproc=new Process(waitingqueuecopy.at(i).arrival_time,waitingqueuecopy.at(i).burst_time);
            newproc->process_id=waitingqueuecopy.at(i).process_id;
            newproc->priority=waitingqueuecopy.at(i).priority;
            WaitingQueue.push_back(newproc);

}
    }
    void startRunning(int quantum){

        if(quantum==0){
            default_quant=3;//set default quantum
        }else{
            default_quant=quantum;
        }
            initialise();
        Clock=0;
        while(ZombieProcess.size()!=nbprocess){
           FCFS();
        cleanRunningProcessqueue();
          Clock+=1;
        }
        for(int i=0;i<ZombieProcess.size();i++){
            FCFSResult.push_back(ZombieProcess.at(i));
        }


        initialise();
        qDebug()<<"execting round robin";
        int executed=0;
        while(ZombieProcess.size()!=nbprocess){          
            Round_Robin(&executed,default_quant);
            cleanRunningProcessqueueRound_robin(&executed,default_quant);
            Clock+=1;
        }
        for(int i=0;i<ZombieProcess.size();i++){
           RoundRobinResult.push_back(ZombieProcess.at(i));
        }

        initialise();

        qDebug()<<"Running SJF";
        while(ZombieProcess.size()!=nbprocess){          
            SJF();
            cleanRunningProcessqueue();
            Clock+=1;
        }
        for(int i=0;i<ZombieProcess.size();i++){
            SJFResult.push_back(ZombieProcess.at(i));
        }

        initialise();
        qDebug()<<"executing priority scheduling";
        while(ZombieProcess.size()!=nbprocess){
           Priority_Scheduling();
            cleanRunningProcessqueue();
            Clock+=1;
        }
        for(int i=0;i<ZombieProcess.size();i++){
            PriorityResult.push_back(ZombieProcess.at(i));
        }


    }
    void cleanRunningProcessqueue(){
        if(ReadyProcesses.size()>0 && ReadyProcesses.at(0)->execution_time>=ReadyProcesses.at(0)->burst_time){
            ReadyProcesses.at(0)->state=false;
            ZombieProcess.push_back(ReadyProcesses.at(0));
            ReadyProcesses.erase(ReadyProcesses.begin());
        }
    }
     void FCFS(){
        //check if there is a current ready process and add it to a temporary array
        //this array contains all the ready processes at the current clock time but in the inverse order  of excecution
        std::vector<Process *> temp;
        for(int j=WaitingQueue.size()-1;j>=0;j--){

            if(WaitingQueue.at(j)->arrival_time<=Clock){
                temp.push_back(WaitingQueue.at(j));
                WaitingQueue.erase(WaitingQueue.begin()+j);
            }

        }

        //adding the elements of temp into the readyprocess array but in the reverse order
        for(int j=temp.size()-1;j>=0;j--){
            ReadyProcesses.push_back(temp.at(j));
        }
        //mark current running process which is the process at the begining of the readyprocess array

        if(ReadyProcesses.size()>0){
            ReadyProcesses.at(0)->state=true;
        }
        //calculate running time
        if(ReadyProcesses.size()>0){
            for(int i=0;i<ReadyProcesses.size();i++){
                if(ReadyProcesses.at(i)->state==false && ReadyProcesses.at(i)->has_reached_cpu==false){
                    ReadyProcesses.at(i)->reponsetime+=1;
                }
                else if(ReadyProcesses.at(i)->state==true ){
                    ReadyProcesses.at(i)->has_reached_cpu=true;
                }
            }
        }


        if(ReadyProcesses.size()>0){
            for(int j=0;j<=ReadyProcesses.size()-1;j++){

                if((ReadyProcesses.at(j))->state==true){
                    (ReadyProcesses.at(j))->execution_time+=1;
                    ReadyProcesses.at(j)->waiting_time-=1;
                }
                (ReadyProcesses.at(j))->waiting_time+=1;
            }

        }






    }


    void SJF(){
        //check if there is a current ready process and add it to a temporary array
        //this array contains all the ready processes at the current clock time but in the inverse order  of excecution
        std::vector<Process *> temp;
        for(int j=WaitingQueue.size()-1;j>=0;j--){

            if(WaitingQueue.at(j)->arrival_time<=Clock){
                temp.push_back(WaitingQueue.at(j));
                WaitingQueue.erase(WaitingQueue.begin()+j);
            }

        }

        //adding the elements of temp into the readyprocess array but in the reverse order
        for(int j=temp.size()-1;j>=0;j--){
            ReadyProcesses.push_back(temp.at(j));
        }



        //mark current running process which is the process at the begining of the readyprocess array


        if(ReadyProcesses.size()>0 && ReadyProcesses.at(0)->state==false){
            //we need to sort the current runningprocess by their to get the next running process which is that which the shortest burst time
            //sorting
            for(int i=0;i<ReadyProcesses.size();i++){
                int min=i;
                for(int j=i;j<ReadyProcesses.size();j++){
                    if(ReadyProcesses.at(j)->burst_time<ReadyProcesses.at(min)->burst_time){
                        min=j;
                    }
                }
                if(i!=min){
                    Process *swap;
                    swap=ReadyProcesses.at(i);
                    ReadyProcesses.at(i)=ReadyProcesses.at(min);
                    ReadyProcesses.at(min)=swap;
                }
            }

            }
        if(ReadyProcesses.size()>0){
            ReadyProcesses.at(0)->state=true; //we need to sort the current runningprocess by their to get the next running process which is that which the shortest burst time

            if(ReadyProcesses.size()>0){
                for(int i=0;i<ReadyProcesses.size();i++){
                    if(ReadyProcesses.at(i)->state==false && ReadyProcesses.at(i)->has_reached_cpu==false){
                        ReadyProcesses.at(i)->reponsetime+=1;
                    }
                    else if(ReadyProcesses.at(i)->state==true ){
                        ReadyProcesses.at(i)->has_reached_cpu=true;
                    }
                }
            }

            for(int j=0;j<=ReadyProcesses.size()-1;j++){

                if((ReadyProcesses.at(j))->state==true){
                    (ReadyProcesses.at(j))->execution_time+=1;

                }else{
                    (ReadyProcesses.at(j))->waiting_time+=1;
                }

            }

        }

    }

    void cleanRunningProcessqueueRound_robin(int * executed_time,int quantum){
        if(ReadyProcesses.size()>0){
            if(*executed_time==quantum){
                *executed_time=0;
                if(ReadyProcesses.at(0)->execution_time==ReadyProcesses.at(0)->burst_time){
                    ReadyProcesses.at(0)->state=false;
                    ZombieProcess.push_back(ReadyProcesses.at(0));
                    ReadyProcesses.erase(ReadyProcesses.begin());
                }
                else{
                    ReadyProcesses.at(0)->state=false;
                    ReadyProcesses.push_back(ReadyProcesses.at(0));
                    ReadyProcesses.erase(ReadyProcesses.begin());
                }
            }
            else{
                if(ReadyProcesses.at(0)->execution_time==ReadyProcesses.at(0)->burst_time){
                    ReadyProcesses.at(0)->state=false;
                    ZombieProcess.push_back(ReadyProcesses.at(0));
                    ReadyProcesses.erase(ReadyProcesses.begin());
                }


            }
            qDebug()<<"executed time is "<<*executed_time<<"\n";
        }

    }
    void Round_Robin(int *executed_time,int quantum){

            //check if there is a current ready process and add it to a temporary array
        //this array contains all the ready processes at the current clock time but in the inverse order  of excecution
        std::vector<Process *> temp;
        for(int j=WaitingQueue.size()-1;j>=0;j--){

            if(WaitingQueue.at(j)->arrival_time<=Clock){
                temp.push_back(WaitingQueue.at(j));
                WaitingQueue.erase(WaitingQueue.begin()+j);
            }

        }

        //adding the elements of temp into the readyprocess array but in the reverse order
        for(int j=temp.size()-1;j>=0;j--){
            ReadyProcesses.push_back(temp.at(j));
        }




        if(ReadyProcesses.size()>0){
            //mark current running process which is the process at the begining of the readyprocess array
            ReadyProcesses.at(0)->state=true;



                for(int i=0;i<ReadyProcesses.size();i++){
                    if(ReadyProcesses.at(i)->state==false && ReadyProcesses.at(i)->has_reached_cpu==false){
                        ReadyProcesses.at(i)->reponsetime+=1;
                    }
                    else if(ReadyProcesses.at(i)->state==true ){
                        ReadyProcesses.at(i)->has_reached_cpu=true;
                    }
                }


            //increment waiting times for non-running processes and execution times for running process
            for(int j=0;j<=ReadyProcesses.size()-1;j++){

                if((ReadyProcesses.at(j))->state==true){
                    (ReadyProcesses.at(j))->execution_time+=1;


                }
                else{
                     (ReadyProcesses.at(j))->waiting_time+=1;
                }


            }
             *executed_time+=1;

        }
        for(int j=0;j<WaitingQueue.size();j++){
            WaitingQueue.at(j)->waiting_time+=1;
        }



    }
    void Priority_Scheduling(){

        std::vector<Process *> temp;
        for(int j=WaitingQueue.size()-1;j>=0;j--){

            if(WaitingQueue.at(j)->arrival_time<=Clock){
                temp.push_back(WaitingQueue.at(j));
                WaitingQueue.erase(WaitingQueue.begin()+j);
            }

        }


        for(int j=temp.size()-1;j>=0;j--){
            ReadyProcesses.push_back(temp.at(j));
        }

        if(ReadyProcesses.size()>0){
            for(int i=0;i<ReadyProcesses.size();i++){
                int min=i;
                for(int j=i;j<ReadyProcesses.size();j++){
                    if(ReadyProcesses.at(j)->priority<ReadyProcesses.at(min)->priority){
                        min=j;
                    }
                }
                if(i!=min){
                    Process *swap;
                    swap=ReadyProcesses.at(i);
                    ReadyProcesses.at(i)=ReadyProcesses.at(min);
                    ReadyProcesses.at(min)=swap;
                }


            }

            ReadyProcesses.at(0)->state=true;

            if(ReadyProcesses.size()>0){
                for(int i=0;i<ReadyProcesses.size();i++){
                    if(ReadyProcesses.at(i)->state==false && ReadyProcesses.at(i)->has_reached_cpu==false){
                        ReadyProcesses.at(i)->reponsetime+=1;
                    }
                    else if(ReadyProcesses.at(i)->state==true ){
                        ReadyProcesses.at(i)->has_reached_cpu=true;
                    }
                }
            }
            //increment waiting times for non-running processes and execution times for running process
            for(int j=0;j<=ReadyProcesses.size()-1;j++){

                if((ReadyProcesses.at(j))->state==true){
                    (ReadyProcesses.at(j))->execution_time+=1;


                }
                else{
                    (ReadyProcesses.at(j))->waiting_time+=1;
                }


            }



        }

    }

};

#endif // PROCESSCLASS_H
