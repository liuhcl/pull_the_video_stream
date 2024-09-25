/****************************************************************************
** Meta object code from reading C++ file 'addurl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rtsp/addURL/addurl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addurl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addurl_t {
    QByteArrayData data[15];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addurl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addurl_t qt_meta_stringdata_addurl = {
    {
QT_MOC_LITERAL(0, 0, 6), // "addurl"
QT_MOC_LITERAL(1, 7, 14), // "alreadyGetData"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(4, 45, 3), // "map"
QT_MOC_LITERAL(5, 49, 10), // "insertData"
QT_MOC_LITERAL(6, 60, 5), // "table"
QT_MOC_LITERAL(7, 66, 2), // "id"
QT_MOC_LITERAL(8, 69, 4), // "name"
QT_MOC_LITERAL(9, 74, 3), // "url"
QT_MOC_LITERAL(10, 78, 9), // "amendData"
QT_MOC_LITERAL(11, 88, 13), // "deleteDataOne"
QT_MOC_LITERAL(12, 102, 13), // "deleteDataAll"
QT_MOC_LITERAL(13, 116, 13), // "addBtnClicked"
QT_MOC_LITERAL(14, 130, 16) // "deleteBtnClicked"

    },
    "addurl\0alreadyGetData\0\0QMap<QString,QString>\0"
    "map\0insertData\0table\0id\0name\0url\0"
    "amendData\0deleteDataOne\0deleteDataAll\0"
    "addBtnClicked\0deleteBtnClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addurl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    4,   52,    2, 0x06 /* Public */,
      10,    3,   61,    2, 0x06 /* Public */,
      11,    2,   68,    2, 0x06 /* Public */,
      12,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    8,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void addurl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<addurl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->alreadyGetData((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 1: _t->insertData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->amendData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->deleteDataOne((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->deleteDataAll((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->addBtnClicked(); break;
        case 6: _t->deleteBtnClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (addurl::*)(QMap<QString,QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addurl::alreadyGetData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (addurl::*)(QString , int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addurl::insertData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (addurl::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addurl::amendData)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (addurl::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addurl::deleteDataOne)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (addurl::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addurl::deleteDataAll)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject addurl::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_addurl.data,
    qt_meta_data_addurl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *addurl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addurl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addurl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int addurl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void addurl::alreadyGetData(QMap<QString,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void addurl::insertData(QString _t1, int _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void addurl::amendData(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void addurl::deleteDataOne(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void addurl::deleteDataAll(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
