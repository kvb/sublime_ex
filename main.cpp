#include <QObject>
#include <QtCore/QCoreApplication>
#include <QTimer>
#include <helloworld.h>
#include <stdio.h>
#include <QThread>
#include <QTimer>
#include <QPrinterInfo>

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

//    HelloWorld helloWorld;
//    HelloWorld helloWorld2;
//    HelloWorld helloWorld3;
//
//    QThread t;
//    QThread t2;
//    QThread t3;
//
//    helloWorld.moveToThread(&t);
//    helloWorld2.moveToThread(&t2);
//    helloWorld3.moveToThread(&t3);
////
//    a.connect(&t2, SIGNAL(started()), &helloWorld2, SLOT(sayGoodBye()));
//    a.connect(&t, SIGNAL(started()), &helloWorld, SLOT(sayHello()));
//    a.connect(&t3, SIGNAL(started()), &helloWorld3, SLOT(sayHello()));
//    a.connect(&helloWorld, SIGNAL( done() ), &a, SLOT( quit() ), Qt::QueuedConnection);
//
//    t.start();
//    t2.start();
//    t3.start();

    Foo f1;
    Foo f2;

    f1.AddItem(0,"Hiya!");
    printf("\nSize: %4i",f1.getLength());

    f1.AddItem(1,"Hiya!");
    printf("\nSize: %4i",f1.getLength());

    f2.AddItem(2,"Heya");
    printf("\nSize: %4i",f2.getLength());

    f2.AddItem(3,"Heya");
    printf("\nSize: %4i",f2.getLength());
    printf("\nSize: %4i",f1.getLength());

    printf("\n%s",Foo::doWonky(0).toAscii().data());
    printf("\n%s",Foo::doWonky(1).toAscii().data());
    printf("\n%s",Foo::doWonky(2).toAscii().data());
    printf("\n%s",Foo::doWonky(3).toAscii().data());


    fprintf(stdout, "\nStarting up... 0x%08x\n",&a);

    QPrinterInfo pInfo = QPrinterInfo::defaultPrinter();

    fprintf(stdout, "\n %s\n",pInfo.printerName().toAscii().data());


    return a.exec();
}
