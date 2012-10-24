#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QObject>
#include <QHash>

class HelloWorld : public QObject
{
Q_OBJECT


private:


public:
    explicit HelloWorld(QObject *parent = 0);



signals:
    void done();

public slots:
    void sayHello();
    void sayGoodBye();



};


class Foo
{
private:

    static QHash<int,QString> pHash;
    int bacon;

public:
    static int Wonky;
    static Foo* bar;
    Foo();
    ~Foo();

    static QString doWonky(int k);
    void AddItem(int k, QString str);
    static int getLength(void) { return pHash.size();};


};

#endif // HELLOWORLD_H
