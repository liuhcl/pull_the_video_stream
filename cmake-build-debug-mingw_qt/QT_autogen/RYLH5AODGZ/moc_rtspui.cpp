/****************************************************************************
** Meta object code from reading C++ file 'rtspui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rtsp/rtspUI/rtspui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtspui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtspUI_t {
    QByteArrayData data[16];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtspUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtspUI_t qt_meta_stringdata_rtspUI = {
    {
QT_MOC_LITERAL(0, 0, 6), // "rtspUI"
QT_MOC_LITERAL(1, 7, 14), // "slotBtnClicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 26), // "deleteVideoLabelBtnClicked"
QT_MOC_LITERAL(4, 50, 16), // "changeVideoLabel"
QT_MOC_LITERAL(5, 67, 10), // "getMapData"
QT_MOC_LITERAL(6, 78, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(7, 100, 3), // "map"
QT_MOC_LITERAL(8, 104, 15), // "getComboBoxText"
QT_MOC_LITERAL(9, 120, 16), // "switchBtnClicked"
QT_MOC_LITERAL(10, 137, 18), // "serialPortWinClose"
QT_MOC_LITERAL(11, 156, 10), // "tcpConnect"
QT_MOC_LITERAL(12, 167, 20), // "tcpSocketStateChange"
QT_MOC_LITERAL(13, 188, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(14, 217, 11), // "tcpSendData"
QT_MOC_LITERAL(15, 229, 8) // "uint8_t*"

    },
    "rtspUI\0slotBtnClicked\0\0"
    "deleteVideoLabelBtnClicked\0changeVideoLabel\0"
    "getMapData\0QMap<QString,QString>\0map\0"
    "getComboBoxText\0switchBtnClicked\0"
    "serialPortWinClose\0tcpConnect\0"
    "tcpSocketStateChange\0QAbstractSocket::SocketState\0"
    "tcpSendData\0uint8_t*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtspUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       4,    2,   68,    2, 0x08 /* Private */,
       5,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    1,   86,    2, 0x08 /* Private */,
      14,    2,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int,    2,    2,

       0        // eod
};

void rtspUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<rtspUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotBtnClicked(); break;
        case 1: _t->deleteVideoLabelBtnClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeVideoLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->getMapData((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 4: _t->getComboBoxText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->switchBtnClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->serialPortWinClose((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 7: _t->tcpConnect(); break;
        case 8: _t->tcpSocketStateChange((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 9: _t->tcpSendData((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtspUI::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_rtspUI.data,
    qt_meta_data_rtspUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtspUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtspUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtspUI.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rtspUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
