#ifndef GOODBYE_WORLD_H
#define GOODBYE_WORLD_H

#include <QObject>
#include <QHash>

class GoodByeWorld : public QObject
{
Q_OBJECT


private:


public:
    explicit GoodByeWorld(QObject *parent = 0);



signals:
    void done();

public slots:
    void sayHello();
    void sayGoodBye();


};

#endif // GOODBYE_WORLD_H
