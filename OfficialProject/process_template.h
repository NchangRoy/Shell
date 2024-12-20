#ifndef PROCESS_TEMPLATE_H
#define PROCESS_TEMPLATE_H

#include <QWidget>

namespace Ui {
class Process_Template;
}

class Process_Template : public QWidget
{
    Q_OBJECT

public:
    explicit Process_Template(QWidget *parent = nullptr);
    void initaliseparam(int a,int b,int id,int pr);
    ~Process_Template();

private:
    Ui::Process_Template *ui;
};

#endif // PROCESS_TEMPLATE_H
