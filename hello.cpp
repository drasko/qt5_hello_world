#include "hello.hpp"
#include <QDebug>

Hello::Hello()
{
    qDebug() << "Created Hello class!";
}

Hello::~Hello()
{
    qDebug() << "Deleted Hello object.";
}

void Hello::on_actionExit_triggered()
{
    qDebug() << "Exit triggered";
}
