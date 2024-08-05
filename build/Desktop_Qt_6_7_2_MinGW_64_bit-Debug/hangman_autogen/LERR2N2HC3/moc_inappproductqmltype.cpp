/****************************************************************************
** Meta object code from reading C++ file 'inappproductqmltype.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../purchasing/qmltypes/inappproductqmltype.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inappproductqmltype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSInAppProductQmlTypeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSInAppProductQmlTypeENDCLASS = QtMocHelpers::stringData(
    "InAppProductQmlType",
    "QML.Element",
    "Product",
    "purchaseSucceeded",
    "",
    "InAppTransaction*",
    "transaction",
    "purchaseFailed",
    "purchaseRestored",
    "identifierChanged",
    "statusChanged",
    "priceChanged",
    "titleChanged",
    "descriptionChanged",
    "storeChanged",
    "typeChanged",
    "handleTransaction",
    "handleProductRegistered",
    "InAppProduct*",
    "product",
    "handleProductUnknown",
    "InAppProduct::ProductType",
    "identifier",
    "purchase",
    "resetStatus",
    "type",
    "ProductType",
    "price",
    "title",
    "description",
    "status",
    "Status",
    "store",
    "InAppStoreQmlType*",
    "Uninitialized",
    "PendingRegistration",
    "Registered",
    "Unknown",
    "Consumable",
    "Unlockable"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInAppProductQmlTypeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      15,   16, // methods
       7,  135, // properties
       2,  170, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  106,    4, 0x06,   10 /* Public */,
       7,    1,  109,    4, 0x06,   12 /* Public */,
       8,    1,  112,    4, 0x06,   14 /* Public */,
       9,    0,  115,    4, 0x06,   16 /* Public */,
      10,    0,  116,    4, 0x06,   17 /* Public */,
      11,    0,  117,    4, 0x06,   18 /* Public */,
      12,    0,  118,    4, 0x06,   19 /* Public */,
      13,    0,  119,    4, 0x06,   20 /* Public */,
      14,    0,  120,    4, 0x06,   21 /* Public */,
      15,    0,  121,    4, 0x06,   22 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,  122,    4, 0x08,   23 /* Private */,
      17,    1,  125,    4, 0x08,   25 /* Private */,
      20,    2,  128,    4, 0x08,   27 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      23,    0,  133,    4, 0x02,   30 /* Public */,
      24,    0,  134,    4, 0x02,   31 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21, QMetaType::QString,    4,   22,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::QString, 0x00015103, uint(3), 0,
      25, 0x80000000 | 26, 0x0001510b, uint(9), 0,
      27, QMetaType::QString, 0x00015001, uint(5), 0,
      28, QMetaType::QString, 0x00015001, uint(6), 0,
      29, QMetaType::QString, 0x00015001, uint(7), 0,
      30, 0x80000000 | 31, 0x00015009, uint(4), 0,
      32, 0x80000000 | 33, 0x0001510b, uint(8), 0,

 // enums: name, alias, flags, count, data
      31,   31, 0x0,    4,  180,
      26,   26, 0x0,    2,  188,

 // enum data: key, value
      34, uint(InAppProductQmlType::Uninitialized),
      35, uint(InAppProductQmlType::PendingRegistration),
      36, uint(InAppProductQmlType::Registered),
      37, uint(InAppProductQmlType::Unknown),
      38, uint(InAppProductQmlType::Consumable),
      39, uint(InAppProductQmlType::Unlockable),

       0        // eod
};

Q_CONSTINIT const QMetaObject InAppProductQmlType::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSInAppProductQmlTypeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInAppProductQmlTypeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'identifier'
        QString,
        // property 'type'
        ProductType,
        // property 'price'
        QString,
        // property 'title'
        QString,
        // property 'description'
        QString,
        // property 'status'
        Status,
        // property 'store'
        InAppStoreQmlType*,
        // enum 'Status'
        InAppProductQmlType::Status,
        // enum 'ProductType'
        InAppProductQmlType::ProductType,
        // Q_OBJECT / Q_GADGET
        InAppProductQmlType,
        // method 'purchaseSucceeded'
        void,
        InAppTransaction *,
        // method 'purchaseFailed'
        void,
        InAppTransaction *,
        // method 'purchaseRestored'
        void,
        InAppTransaction *,
        // method 'identifierChanged'
        void,
        // method 'statusChanged'
        void,
        // method 'priceChanged'
        void,
        // method 'titleChanged'
        void,
        // method 'descriptionChanged'
        void,
        // method 'storeChanged'
        void,
        // method 'typeChanged'
        void,
        // method 'handleTransaction'
        void,
        InAppTransaction *,
        // method 'handleProductRegistered'
        void,
        InAppProduct *,
        // method 'handleProductUnknown'
        void,
        InAppProduct::ProductType,
        const QString &,
        // method 'purchase'
        void,
        // method 'resetStatus'
        void
    >,
    nullptr
} };

void InAppProductQmlType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InAppProductQmlType *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->purchaseSucceeded((*reinterpret_cast< std::add_pointer_t<InAppTransaction*>>(_a[1]))); break;
        case 1: _t->purchaseFailed((*reinterpret_cast< std::add_pointer_t<InAppTransaction*>>(_a[1]))); break;
        case 2: _t->purchaseRestored((*reinterpret_cast< std::add_pointer_t<InAppTransaction*>>(_a[1]))); break;
        case 3: _t->identifierChanged(); break;
        case 4: _t->statusChanged(); break;
        case 5: _t->priceChanged(); break;
        case 6: _t->titleChanged(); break;
        case 7: _t->descriptionChanged(); break;
        case 8: _t->storeChanged(); break;
        case 9: _t->typeChanged(); break;
        case 10: _t->handleTransaction((*reinterpret_cast< std::add_pointer_t<InAppTransaction*>>(_a[1]))); break;
        case 11: _t->handleProductRegistered((*reinterpret_cast< std::add_pointer_t<InAppProduct*>>(_a[1]))); break;
        case 12: _t->handleProductUnknown((*reinterpret_cast< std::add_pointer_t<InAppProduct::ProductType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->purchase(); break;
        case 14: _t->resetStatus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InAppTransaction* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InAppTransaction* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InAppTransaction* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InAppTransaction* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InAppProduct* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InAppProductQmlType::*)(InAppTransaction * );
            if (_t _q_method = &InAppProductQmlType::purchaseSucceeded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InAppProductQmlType::*)(InAppTransaction * );
            if (_t _q_method = &InAppProductQmlType::purchaseFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InAppProductQmlType::*)(InAppTransaction * );
            if (_t _q_method = &InAppProductQmlType::purchaseRestored; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InAppProductQmlType::*)();
            if (_t _q_method = &InAppProductQmlType::identifierChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InAppProductQmlType::*)();
            if (_t _q_method = &InAppProductQmlType::statusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InAppProductQmlType::*)();
            if (_t _q_method = &InAppProductQmlType::priceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (InAppProductQmlType::*)();
            if (_t _q_method = &InAppProductQmlType::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (InAppProductQmlType::*)();
            if (_t _q_method = &InAppProductQmlType::descriptionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (InAppProductQmlType::*)();
            if (_t _q_method = &InAppProductQmlType::storeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (InAppProductQmlType::*)();
            if (_t _q_method = &InAppProductQmlType::typeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InAppStoreQmlType* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InAppProductQmlType *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->identifier(); break;
        case 1: *reinterpret_cast< ProductType*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->price(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 5: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 6: *reinterpret_cast< InAppStoreQmlType**>(_v) = _t->store(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InAppProductQmlType *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIdentifier(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setType(*reinterpret_cast< ProductType*>(_v)); break;
        case 6: _t->setStore(*reinterpret_cast< InAppStoreQmlType**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *InAppProductQmlType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InAppProductQmlType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInAppProductQmlTypeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int InAppProductQmlType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void InAppProductQmlType::purchaseSucceeded(InAppTransaction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InAppProductQmlType::purchaseFailed(InAppTransaction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InAppProductQmlType::purchaseRestored(InAppTransaction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InAppProductQmlType::identifierChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void InAppProductQmlType::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void InAppProductQmlType::priceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void InAppProductQmlType::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void InAppProductQmlType::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void InAppProductQmlType::storeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void InAppProductQmlType::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
