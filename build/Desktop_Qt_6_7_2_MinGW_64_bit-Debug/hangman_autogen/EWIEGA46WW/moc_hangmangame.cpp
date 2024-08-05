/****************************************************************************
** Meta object code from reading C++ file 'hangmangame.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../hangmangame.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hangmangame.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSHangmanGameENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSHangmanGameENDCLASS = QtMocHelpers::stringData(
    "HangmanGame",
    "QML.Element",
    "Hangman",
    "wordChanged",
    "",
    "lettersOwnedChanged",
    "errorCountChanged",
    "vowelBought",
    "vowel",
    "purchaseWasSuccessful",
    "wasSuccessful",
    "vowelsUnlockedChanged",
    "unlocked",
    "vowelsAvailableChanged",
    "arg",
    "wordsGivenChanged",
    "wordsGuessedCorrectlyChanged",
    "scoreChanged",
    "registerLetterBought",
    "letter",
    "reset",
    "reveal",
    "gameOverReveal",
    "requestLetter",
    "letterString",
    "guessWord",
    "word",
    "isVowel",
    "setVowelsAvailable",
    "count",
    "setWordsGiven",
    "setWordsGuessedCorrectly",
    "setScore",
    "score",
    "lettersOwned",
    "vowels",
    "consonants",
    "errorCount",
    "vowelsUnlocked",
    "vowelsAvailable",
    "wordsGiven",
    "wordsGuessedCorrectly"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHangmanGameENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      21,   16, // methods
      10,  193, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  142,    4, 0x06,   11 /* Public */,
       5,    0,  143,    4, 0x06,   12 /* Public */,
       6,    0,  144,    4, 0x06,   13 /* Public */,
       7,    1,  145,    4, 0x06,   14 /* Public */,
       9,    1,  148,    4, 0x06,   16 /* Public */,
      11,    1,  151,    4, 0x06,   18 /* Public */,
      13,    1,  154,    4, 0x06,   20 /* Public */,
      15,    1,  157,    4, 0x06,   22 /* Public */,
      16,    1,  160,    4, 0x06,   24 /* Public */,
      17,    1,  163,    4, 0x06,   26 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      18,    1,  166,    4, 0x08,   28 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      20,    0,  169,    4, 0x02,   30 /* Public */,
      21,    0,  170,    4, 0x02,   31 /* Public */,
      22,    0,  171,    4, 0x02,   32 /* Public */,
      23,    1,  172,    4, 0x02,   33 /* Public */,
      25,    1,  175,    4, 0x02,   35 /* Public */,
      27,    1,  178,    4, 0x02,   37 /* Public */,
      28,    1,  181,    4, 0x02,   39 /* Public */,
      30,    1,  184,    4, 0x02,   41 /* Public */,
      31,    1,  187,    4, 0x02,   43 /* Public */,
      32,    1,  190,    4, 0x02,   45 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QChar,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QChar,   19,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Bool, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   33,

 // properties: name, type, flags
      26, QMetaType::QString, 0x00015001, uint(0), 0,
      34, QMetaType::QString, 0x00015001, uint(1), 0,
      35, QMetaType::QString, 0x00015401, uint(-1), 0,
      36, QMetaType::QString, 0x00015401, uint(-1), 0,
      37, QMetaType::Int, 0x00015001, uint(2), 0,
      38, QMetaType::Bool, 0x00015103, uint(5), 0,
      39, QMetaType::Int, 0x00015103, uint(6), 0,
      40, QMetaType::Int, 0x00015103, uint(7), 0,
      41, QMetaType::Int, 0x00015103, uint(8), 0,
      33, QMetaType::Int, 0x00015103, uint(9), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject HangmanGame::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSHangmanGameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHangmanGameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'word'
        QString,
        // property 'lettersOwned'
        QString,
        // property 'vowels'
        QString,
        // property 'consonants'
        QString,
        // property 'errorCount'
        int,
        // property 'vowelsUnlocked'
        bool,
        // property 'vowelsAvailable'
        int,
        // property 'wordsGiven'
        int,
        // property 'wordsGuessedCorrectly'
        int,
        // property 'score'
        int,
        // Q_OBJECT / Q_GADGET
        HangmanGame,
        // method 'wordChanged'
        void,
        // method 'lettersOwnedChanged'
        void,
        // method 'errorCountChanged'
        void,
        // method 'vowelBought'
        void,
        const QChar &,
        // method 'purchaseWasSuccessful'
        void,
        bool,
        // method 'vowelsUnlockedChanged'
        void,
        bool,
        // method 'vowelsAvailableChanged'
        void,
        int,
        // method 'wordsGivenChanged'
        void,
        int,
        // method 'wordsGuessedCorrectlyChanged'
        void,
        int,
        // method 'scoreChanged'
        void,
        int,
        // method 'registerLetterBought'
        void,
        const QChar &,
        // method 'reset'
        void,
        // method 'reveal'
        void,
        // method 'gameOverReveal'
        void,
        // method 'requestLetter'
        void,
        const QString &,
        // method 'guessWord'
        void,
        const QString &,
        // method 'isVowel'
        bool,
        const QString &,
        // method 'setVowelsAvailable'
        void,
        int,
        // method 'setWordsGiven'
        void,
        int,
        // method 'setWordsGuessedCorrectly'
        void,
        int,
        // method 'setScore'
        void,
        int
    >,
    nullptr
} };

void HangmanGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HangmanGame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->wordChanged(); break;
        case 1: _t->lettersOwnedChanged(); break;
        case 2: _t->errorCountChanged(); break;
        case 3: _t->vowelBought((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        case 4: _t->purchaseWasSuccessful((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->vowelsUnlockedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->vowelsAvailableChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->wordsGivenChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->wordsGuessedCorrectlyChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->scoreChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->registerLetterBought((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        case 11: _t->reset(); break;
        case 12: _t->reveal(); break;
        case 13: _t->gameOverReveal(); break;
        case 14: _t->requestLetter((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->guessWord((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: { bool _r = _t->isVowel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->setVowelsAvailable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->setWordsGiven((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->setWordsGuessedCorrectly((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->setScore((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HangmanGame::*)();
            if (_t _q_method = &HangmanGame::wordChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HangmanGame::*)();
            if (_t _q_method = &HangmanGame::lettersOwnedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HangmanGame::*)();
            if (_t _q_method = &HangmanGame::errorCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HangmanGame::*)(const QChar & );
            if (_t _q_method = &HangmanGame::vowelBought; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HangmanGame::*)(bool );
            if (_t _q_method = &HangmanGame::purchaseWasSuccessful; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HangmanGame::*)(bool );
            if (_t _q_method = &HangmanGame::vowelsUnlockedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HangmanGame::*)(int );
            if (_t _q_method = &HangmanGame::vowelsAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (HangmanGame::*)(int );
            if (_t _q_method = &HangmanGame::wordsGivenChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (HangmanGame::*)(int );
            if (_t _q_method = &HangmanGame::wordsGuessedCorrectlyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (HangmanGame::*)(int );
            if (_t _q_method = &HangmanGame::scoreChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HangmanGame *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->word(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->lettersOwned(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->vowels(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->consonants(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->errorCount(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->vowelsUnlocked(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->vowelsAvailable(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->wordsGiven(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->wordsGuessedCorrectly(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->score(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HangmanGame *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setVowelsUnlocked(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setVowelsAvailable(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setWordsGiven(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setWordsGuessedCorrectly(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setScore(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *HangmanGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HangmanGame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHangmanGameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HangmanGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HangmanGame::wordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HangmanGame::lettersOwnedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HangmanGame::errorCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void HangmanGame::vowelBought(const QChar & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HangmanGame::purchaseWasSuccessful(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HangmanGame::vowelsUnlockedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HangmanGame::vowelsAvailableChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HangmanGame::wordsGivenChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void HangmanGame::wordsGuessedCorrectlyChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void HangmanGame::scoreChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
