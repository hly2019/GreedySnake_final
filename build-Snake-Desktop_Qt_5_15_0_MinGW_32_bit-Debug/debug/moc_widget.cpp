/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Snake/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[16];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 10), // "timerEvent"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "QTimerEvent*"
QT_MOC_LITERAL(4, 32, 14), // "deleteLast_Rec"
QT_MOC_LITERAL(5, 47, 13), // "keyPressEvent"
QT_MOC_LITERAL(6, 61, 10), // "QKeyEvent*"
QT_MOC_LITERAL(7, 72, 5), // "event"
QT_MOC_LITERAL(8, 78, 11), // "addReckF_up"
QT_MOC_LITERAL(9, 90, 13), // "addReckF_down"
QT_MOC_LITERAL(10, 104, 13), // "addReckF_left"
QT_MOC_LITERAL(11, 118, 14), // "addReckF_right"
QT_MOC_LITERAL(12, 133, 10), // "create_egg"
QT_MOC_LITERAL(13, 144, 7), // "eat_egg"
QT_MOC_LITERAL(14, 152, 11), // "judge_cover"
QT_MOC_LITERAL(15, 164, 6) // "strike"

    },
    "Widget\0timerEvent\0\0QTimerEvent*\0"
    "deleteLast_Rec\0keyPressEvent\0QKeyEvent*\0"
    "event\0addReckF_up\0addReckF_down\0"
    "addReckF_left\0addReckF_right\0create_egg\0"
    "eat_egg\0judge_cover\0strike"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x09 /* Protected */,
       4,    0,   72,    2, 0x09 /* Protected */,
       5,    1,   73,    2, 0x09 /* Protected */,
       8,    0,   76,    2, 0x09 /* Protected */,
       9,    0,   77,    2, 0x09 /* Protected */,
      10,    0,   78,    2, 0x09 /* Protected */,
      11,    0,   79,    2, 0x09 /* Protected */,
      12,    0,   80,    2, 0x09 /* Protected */,
      13,    0,   81,    2, 0x09 /* Protected */,
      14,    2,   82,    2, 0x09 /* Protected */,
      15,    0,   87,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QRectF, QMetaType::QRectF,    2,    2,
    QMetaType::Bool,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 1: _t->deleteLast_Rec(); break;
        case 2: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 3: _t->addReckF_up(); break;
        case 4: _t->addReckF_down(); break;
        case 5: _t->addReckF_left(); break;
        case 6: _t->addReckF_right(); break;
        case 7: _t->create_egg(); break;
        case 8: _t->eat_egg(); break;
        case 9: { bool _r = _t->judge_cover((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->strike();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
