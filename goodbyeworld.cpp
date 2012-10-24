#include "goodbyeworld.h"
#include <QWaitCondition>
#include <QMutex>
#include <QThread>
#include <stdio.h>

#include <windows.h>

static QWaitCondition waitforme;
static QMutex mutex;


GoodByeWorld::GoodByeWorld(QObject *parent) :
    QObject(parent)
{

}

void GoodByeWorld::sayHello()
{


}

void GoodByeWorld::sayGoodBye()
{

}

