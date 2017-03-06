#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QDebug>
#include <QTimer>

class Counter : public QObject
{
    Q_OBJECT

public:

    Counter(QObject *parent = 0);
    int value() const;

public slots:
    void setValue();

signals:
    void valueChanged(int newValue);

private:
    int m_value;
    QTimer *timer;
};

#endif // COUNTER_H
