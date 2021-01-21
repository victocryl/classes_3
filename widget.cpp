#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ptr_obj = new Other();  // создаём объект Other

}

Widget::~Widget()
{
    delete ui;
}

