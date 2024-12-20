#ifndef P_TEMPLATE_EXE_H
#define P_TEMPLATE_EXE_H

#include <QWidget>

namespace Ui {
class P_template_exe;
}

class P_template_exe : public QWidget
{
    Q_OBJECT

public:
    explicit P_template_exe(QWidget *parent = nullptr);
    void updateParam(int p_id,int a_time,int b_time,int e_time,int w_time,bool state);
    ~P_template_exe();

private:
    Ui::P_template_exe *ui;
};

#endif // P_TEMPLATE_EXE_H
