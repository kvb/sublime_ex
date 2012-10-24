#include "helloworld.h"
#include <QWaitCondition>
#include <QMutex>
#include <QThread>
#include <stdio.h>

#include <windows.h>

QWaitCondition waitforme;
QMutex mutex;


int Foo::Wonky = 0;
QHash<int,QString> Foo::pHash;

HelloWorld::HelloWorld(QObject *parent) :
    QObject(parent)
{

}

void HelloWorld::sayHello()
{


}

void HelloWorld::sayGoodBye()
{

}

Foo* Foo::bar;

Foo::Foo()
{
    bar = this;
    Wonky++;
}

Foo::~Foo()
{
    --Wonky;

    if (Wonky == 0)
        pHash.clear();
}

void Foo::AddItem(int k, QString str)
{
    pHash.insert(k,str);
}


QString Foo::doWonky(int k)
{
    if (pHash.contains(k))
        return pHash.value(k);

    return "";
}
