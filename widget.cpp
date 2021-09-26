#include <QtWidgets>
#include "widget.h"
#include "flowlayout.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    FlowLayout *flowLayout = new FlowLayout(this);
    for (int i = 0; i < 15; ++i) {
        flowLayout->addWidget(new QPushButton(QString::number(i)));
    }
    this->setLayout(flowLayout);
}
