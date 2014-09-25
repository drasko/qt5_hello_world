#include "hello.hpp"
#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Hello h;

    qDebug() << "Starting Hello daemon...";

    return a.exec();
}
