#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QTimer>
#include <QTime>
#include <counter.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Counter timer;

    return app.exec();


}

