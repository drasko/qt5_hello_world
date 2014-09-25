#ifndef HELLO_HPP
#define HELLO_HPP

#include <QObject>

class Hello : public QObject
{
    Q_OBJECT

public:
    explicit Hello();
    ~Hello();

private slots:
    void on_actionExit_triggered();

private:
    int p;
};

#endif // HELLO_HPP

