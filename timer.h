#include <QCoreApplication>
#include <QObject>
#include <QTimer>
#include <QTextStream>
#include <QDebug>
#include "counter.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Counter cnt;

    return a.exec();
}
