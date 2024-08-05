/****************************************************************************
** Meta object code from reading C++ file 'inapptransaction.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../purchasing/inapp/inapptransaction.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inapptransaction.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSInAppTransactionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSInAppTransactionENDCLASS = QtMocHelpers::stringData(
    "InAppTransaction",
    "QML.Element",
    "Transaction",
    "QML.Foreign",
    "QQmlTypeNotAvailable",
    "finalize",
    "",
    "platformProperty",
    "propertyName",
    "status",
    "TransactionStatus",
    "product",
    "InAppProduct*",
    "orderId",
    "failureReason",
    "FailureReason",
    "errorString",
    "timestamp",
    "Unknown",
    "PurchaseApproved",
    "PurchaseFailed",
    "PurchaseRestored",
    "NoFailure",
    "CanceledByUser",
    "ErrorOccurred"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInAppTransactionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       2,   14, // classinfo
       2,   18, // methods
       6,   34, // properties
       2,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   30,    6, 0x02,    9 /* Public */,
       7,    1,   31,    6, 0x102,   10 /* Public | MethodIsConst  */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    8,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 12, 0x00015409, uint(-1), 0,
      13, QMetaType::QString, 0x00015401, uint(-1), 0,
      14, 0x80000000 | 15, 0x00015409, uint(-1), 0,
      16, QMetaType::QString, 0x00015401, uint(-1), 0,
      17, QMetaType::QDateTime, 0x00015401, uint(-1), 0,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    4,   74,
      15,   15, 0x0,    3,   82,

 // enum data: key, value
      18, uint(InAppTransaction::Unknown),
      19, uint(InAppTransaction::PurchaseApproved),
      20, uint(InAppTransaction::PurchaseFailed),
      21, uint(InAppTransaction::PurchaseRestored),
      22, uint(InAppTransaction::NoFailure),
      23, uint(InAppTransaction::CanceledByUser),
      24, uint(InAppTransaction::ErrorOccurred),

       0        // eod
};

Q_CONSTINIT const QMetaObject InAppTransaction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSInAppTransactionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInAppTransactionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'status'
        TransactionStatus,
        // property 'product'
        InAppProduct*,
        // property 'orderId'
        QString,
        // property 'failureReason'
        FailureReason,
        // property 'errorString'
        QString,
        // property 'timestamp'
        QDateTime,
        // enum 'TransactionStatus'
        InAppTransaction::TransactionStatus,
        // enum 'FailureReason'
        InAppTransaction::FailureReason,
        // Q_OBJECT / Q_GADGET
        InAppTransaction,
        // method 'finalize'
        void,
        // method 'platformProperty'
        QString,
        const QString &
    >,
    nullptr
} };

void InAppTransaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InAppTransaction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finalize(); break;
        case 1: { QString _r = _t->platformProperty((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InAppProduct* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InAppTransaction *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TransactionStatus*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< InAppProduct**>(_v) = _t->product(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->orderId(); break;
        case 3: *reinterpret_cast< FailureReason*>(_v) = _t->failureReason(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 5: *reinterpret_cast< QDateTime*>(_v) = _t->timestamp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *InAppTransaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InAppTransaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInAppTransactionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InAppTransaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
