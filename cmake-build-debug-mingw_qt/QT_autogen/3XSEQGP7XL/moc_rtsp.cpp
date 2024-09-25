/****************************************************************************
** Meta object code from reading C++ file 'rtsp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rtsp/rtsp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtsp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtsp_t {
    QByteArrayData data[12];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtsp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtsp_t qt_meta_stringdata_rtsp = {
    {
QT_MOC_LITERAL(0, 0, 4), // "rtsp"
QT_MOC_LITERAL(1, 5, 7), // "sigData"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 8), // "uint8_t*"
QT_MOC_LITERAL(4, 23, 9), // "rgbBuffer"
QT_MOC_LITERAL(5, 33, 5), // "width"
QT_MOC_LITERAL(6, 39, 6), // "height"
QT_MOC_LITERAL(7, 46, 5), // "pixel"
QT_MOC_LITERAL(8, 52, 6), // "sigErr"
QT_MOC_LITERAL(9, 59, 6), // "errStr"
QT_MOC_LITERAL(10, 66, 12), // "readFrameErr"
QT_MOC_LITERAL(11, 79, 11) // "pull_stream"

    },
    "rtsp\0sigData\0\0uint8_t*\0rgbBuffer\0width\0"
    "height\0pixel\0sigErr\0errStr\0readFrameErr\0"
    "pull_stream"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtsp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,
      10,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void rtsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<rtsp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigData((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: _t->sigErr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->readFrameErr(); break;
        case 3: _t->pull_stream(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (rtsp::*)(uint8_t * , int , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rtsp::sigData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (rtsp::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rtsp::sigErr)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (rtsp::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rtsp::readFrameErr)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtsp::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_rtsp.data,
    qt_meta_data_rtsp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtsp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtsp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtsp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int rtsp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void rtsp::sigData(uint8_t * _t1, int _t2, int _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rtsp::sigErr(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rtsp::readFrameErr()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
