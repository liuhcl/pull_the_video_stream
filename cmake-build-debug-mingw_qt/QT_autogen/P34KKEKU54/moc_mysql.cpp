/****************************************************************************
** Meta object code from reading C++ file 'mysql.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rtsp/mysql/mysql.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mysql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mysql_t {
    QByteArrayData data[10];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mysql_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mysql_t qt_meta_stringdata_mysql = {
    {
QT_MOC_LITERAL(0, 0, 5), // "mysql"
QT_MOC_LITERAL(1, 6, 12), // "amendSqlData"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "table"
QT_MOC_LITERAL(4, 26, 4), // "name"
QT_MOC_LITERAL(5, 31, 3), // "url"
QT_MOC_LITERAL(6, 35, 13), // "insertSqlData"
QT_MOC_LITERAL(7, 49, 2), // "id"
QT_MOC_LITERAL(8, 52, 16), // "deleteSqlDataOne"
QT_MOC_LITERAL(9, 69, 16) // "deleteSqlDataAll"

    },
    "mysql\0amendSqlData\0\0table\0name\0url\0"
    "insertSqlData\0id\0deleteSqlDataOne\0"
    "deleteSqlDataAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mysql[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       6,    4,   41,    2, 0x0a /* Public */,
       8,    2,   50,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    7,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void mysql::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mysql *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->amendSqlData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->insertSqlData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->deleteSqlDataOne((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->deleteSqlDataAll((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mysql::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_mysql.data,
    qt_meta_data_mysql,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mysql::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mysql::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mysql.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mysql::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
