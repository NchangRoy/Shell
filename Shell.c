#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

void organiser(char *buff,char *cmd[100][100]){
    char *tok=strtok(buff," ");
    int i=0; //counter to change row where the string is stored in cmd
    while(tok!=0){
        *cmd[i]=tok;
        
        tok=strtok(0," ");
        i+=1;
    }
     
}


void Decode_exectute(char *cmd[][100],int *running,char * buff){
      if(strcmp(*cmd[0],"exit")==0){
        *running=0;//change running to 0 to exit the main while loop
        
    }
    //*internal commands
    else if(strcmp(*cmd[0],"echo")==0||strcmp(*cmd[0],"pwd")==0){
    
        system(buff); //comparing first buff with inbuilt shell comands and executing the command directly

    } 
    else if(strcmp(*cmd[0],"cd")==0){
        chdir(*cmd[1]);//cd fully functional
    }
        //**external commands
    else{
        //constructing path to binary file 
        //assuming the path to the binary files is /usr/bin
        char string[100]="/usr/bin/";
        strcat(string,*cmd[0]);
        
        //creating child process
     __pid_t pid=fork();
        if(pid<0){
            printf("There was a problem while creating process");
        }
        else{
            
        if(pid==0){
            //printf("%s",string);
            //printf("Creating process child") 
;
            char *Param[100];
           // for(int i=0;i<100;i++){
             //   Param[i]=NULL;
            //}
            Param[0]=string;//intialising first paramter of argv to the name of the binary executable file
            
            //adding all the parameter passed during the command call to argv
            int i=1;
           while(*cmd[i]!='\0' && i<99){
            Param[i]=*cmd[i];
            i+=1;
            }
            //setting last parameter of argv to NULL
            Param[i]=NULL;
            //I tried to set an environment variable but i don't really know which environment variables i need for each command or program
            char *env[100]={"DISPLAY=:0",NULL};

            execve(string,Param,env);
        }else{
            int status;
            
            wait(&status);
            
        }
        }
    }
        
}



int main(){
    
    char *buff=( char *)malloc(1024*sizeof(char));
    char *cmd[100][100];
    char *cwd=(char *)malloc(100*sizeof(char));//current working directory path
    
    int running =1;
    while(running){
        bzero(buff,1024);
        bzero(cwd,100);
        for(int i=0;i<100;i++){
            bzero(cmd[i],100);
        }
        //getting current working directory
        getcwd(cwd,100);

        printf("%s  ",cwd);
        printf("Prompts>");
        
        fgets(buff,1024,stdin);
        buff[strlen(buff)-1]='\0';
        
        organiser(buff,cmd);
       
        Decode_exectute(cmd,&running,buff);
        //interpreter_executer(buff,&running);

    }
    
    
}