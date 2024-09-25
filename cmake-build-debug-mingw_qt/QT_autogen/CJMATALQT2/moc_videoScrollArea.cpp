/****************************************************************************
** Meta object code from reading C++ file 'videoScrollArea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rtsp/rtspUI/videoScrollArea/videoScrollArea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoScrollArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_videoScrollArea_t {
    QByteArrayData data[7];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_videoScrollArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_videoScrollArea_t qt_meta_stringdata_videoScrollArea = {
    {
QT_MOC_LITERAL(0, 0, 15), // "videoScrollArea"
QT_MOC_LITERAL(1, 16, 14), // "moveVideoLabel"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "detaleVideoLabel"
QT_MOC_LITERAL(4, 49, 16), // "removeVideoLabel"
QT_MOC_LITERAL(5, 66, 16), // "deteleVideoLabel"
QT_MOC_LITERAL(6, 83, 19) // "selectLabelWinClose"

    },
    "videoScrollArea\0moveVideoLabel\0\0"
    "detaleVideoLabel\0removeVideoLabel\0"
    "deteleVideoLabel\0selectLabelWinClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_videoScrollArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       3,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void videoScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<videoScrollArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveVideoLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->detaleVideoLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->removeVideoLabel(); break;
        case 3: _t->deteleVideoLabel(); break;
        case 4: _t->selectLabelWinClose((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (videoScrollArea::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&videoScrollArea::moveVideoLabel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (videoScrollArea::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&videoScrollArea::detaleVideoLabel)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject videoScrollArea::staticMetaObject = { {
    &QScrollArea::staticMetaObject,
    qt_meta_stringdata_videoScrollArea.data,
    qt_meta_data_videoScrollArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *videoScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *videoScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_videoScrollArea.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int videoScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void videoScrollArea::moveVideoLabel(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void videoScrollArea::detaleVideoLabel(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
