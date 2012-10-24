/****************************************************************************
** Meta object code from reading C++ file 'goodbyeworld.h'
**
** Created: Tue Oct 23 16:46:12 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../goodbyeworld.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'goodbyeworld.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GoodByeWorld[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   13,   13,   13, 0x0a,
      32,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GoodByeWorld[] = {
    "GoodByeWorld\0\0done()\0sayHello()\0"
    "sayGoodBye()\0"
};

const QMetaObject GoodByeWorld::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GoodByeWorld,
      qt_meta_data_GoodByeWorld, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GoodByeWorld::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GoodByeWorld::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GoodByeWorld::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GoodByeWorld))
        return static_cast<void*>(const_cast< GoodByeWorld*>(this));
    return QObject::qt_metacast(_clname);
}

int GoodByeWorld::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: done(); break;
        case 1: sayHello(); break;
        case 2: sayGoodBye(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GoodByeWorld::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
