/****************************************************************************
** Meta object code from reading C++ file 'videoLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rtsp/videoWin/videoLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_videoLabel_t {
    QByteArrayData data[23];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_videoLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_videoLabel_t qt_meta_stringdata_videoLabel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "videoLabel"
QT_MOC_LITERAL(1, 11, 17), // "start_pull_stream"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "deleteVideoLabel"
QT_MOC_LITERAL(4, 47, 16), // "changeVideoLabel"
QT_MOC_LITERAL(5, 64, 10), // "timerEvent"
QT_MOC_LITERAL(6, 75, 12), // "QTimerEvent*"
QT_MOC_LITERAL(7, 88, 5), // "event"
QT_MOC_LITERAL(8, 94, 15), // "recv_frame_data"
QT_MOC_LITERAL(9, 110, 8), // "uint8_t*"
QT_MOC_LITERAL(10, 119, 4), // "data"
QT_MOC_LITERAL(11, 124, 6), // "frameW"
QT_MOC_LITERAL(12, 131, 6), // "frameH"
QT_MOC_LITERAL(13, 138, 5), // "pixel"
QT_MOC_LITERAL(14, 144, 16), // "read_frame_error"
QT_MOC_LITERAL(15, 161, 14), // "rtspThread_err"
QT_MOC_LITERAL(16, 176, 6), // "errStr"
QT_MOC_LITERAL(17, 183, 15), // "playBtnsClicked"
QT_MOC_LITERAL(18, 199, 18), // "magnifyBtnsClicked"
QT_MOC_LITERAL(19, 218, 18), // "refreshBtnsClicked"
QT_MOC_LITERAL(20, 237, 26), // "deleteVideoLabelBtnClicked"
QT_MOC_LITERAL(21, 264, 26), // "changeVideoLabelBtnClicked"
QT_MOC_LITERAL(22, 291, 19) // "changeLabelWinClose"

    },
    "videoLabel\0start_pull_stream\0\0"
    "deleteVideoLabel\0changeVideoLabel\0"
    "timerEvent\0QTimerEvent*\0event\0"
    "recv_frame_data\0uint8_t*\0data\0frameW\0"
    "frameH\0pixel\0read_frame_error\0"
    "rtspThread_err\0errStr\0playBtnsClicked\0"
    "magnifyBtnsClicked\0refreshBtnsClicked\0"
    "deleteVideoLabelBtnClicked\0"
    "changeVideoLabelBtnClicked\0"
    "changeLabelWinClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_videoLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       4,    2,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   88,    2, 0x08 /* Private */,
       8,    4,   91,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    1,  101,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,
      19,    0,  106,    2, 0x08 /* Private */,
      20,    0,  107,    2, 0x08 /* Private */,
      21,    0,  108,    2, 0x08 /* Private */,
      22,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void videoLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<videoLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start_pull_stream(); break;
        case 1: _t->deleteVideoLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeVideoLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 4: _t->recv_frame_data((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->read_frame_error(); break;
        case 6: _t->rtspThread_err((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->playBtnsClicked(); break;
        case 8: _t->magnifyBtnsClicked(); break;
        case 9: _t->refreshBtnsClicked(); break;
        case 10: _t->deleteVideoLabelBtnClicked(); break;
        case 11: _t->changeVideoLabelBtnClicked(); break;
        case 12: _t->changeLabelWinClose((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (videoLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&videoLabel::start_pull_stream)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (videoLabel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&videoLabel::deleteVideoLabel)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (videoLabel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&videoLabel::changeVideoLabel)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject videoLabel::staticMetaObject = { {
    &QLabel::staticMetaObject,
    qt_meta_stringdata_videoLabel.data,
    qt_meta_data_videoLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *videoLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *videoLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_videoLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int videoLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void videoLabel::start_pull_stream()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void videoLabel::deleteVideoLabel(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void videoLabel::changeVideoLabel(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
