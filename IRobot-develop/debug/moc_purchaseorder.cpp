/****************************************************************************
** Meta object code from reading C++ file 'purchaseorder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../purchaseorder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'purchaseorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PurchaseOrder_t {
    QByteArrayData data[10];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PurchaseOrder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PurchaseOrder_t qt_meta_stringdata_PurchaseOrder = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PurchaseOrder"
QT_MOC_LITERAL(1, 14, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "on_Pr1_Qty_valueChanged"
QT_MOC_LITERAL(4, 63, 23), // "on_Pr2_Qty_valueChanged"
QT_MOC_LITERAL(5, 87, 23), // "on_Pr3_Qty_valueChanged"
QT_MOC_LITERAL(6, 111, 28), // "on_Plan1_currentIndexChanged"
QT_MOC_LITERAL(7, 140, 28), // "on_Plan2_currentIndexChanged"
QT_MOC_LITERAL(8, 169, 28), // "on_Plan3_currentIndexChanged"
QT_MOC_LITERAL(9, 198, 21) // "on_pushButton_clicked"

    },
    "PurchaseOrder\0on_pushButton_2_clicked\0"
    "\0on_Pr1_Qty_valueChanged\0"
    "on_Pr2_Qty_valueChanged\0on_Pr3_Qty_valueChanged\0"
    "on_Plan1_currentIndexChanged\0"
    "on_Plan2_currentIndexChanged\0"
    "on_Plan3_currentIndexChanged\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PurchaseOrder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       4,    1,   58,    2, 0x08 /* Private */,
       5,    1,   61,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       7,    1,   67,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void PurchaseOrder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PurchaseOrder *_t = static_cast<PurchaseOrder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_Pr1_Qty_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_Pr2_Qty_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_Pr3_Qty_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_Plan1_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_Plan2_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_Plan3_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject PurchaseOrder::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PurchaseOrder.data,
      qt_meta_data_PurchaseOrder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PurchaseOrder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PurchaseOrder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PurchaseOrder.stringdata0))
        return static_cast<void*>(const_cast< PurchaseOrder*>(this));
    return QDialog::qt_metacast(_clname);
}

int PurchaseOrder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
