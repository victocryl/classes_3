#include "other.h"

Other::Other()
{
    a = 3;
    ui->label->setText(QString::number(a + 3));
}

Other::~Other(){}
