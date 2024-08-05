/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <hangmangame.h>
#include <inappproductqmltype.h>
#include <inappstoreqmltype.h>
#include <inapptransaction.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Hangman()
{
    qmlRegisterTypesAndRevisions<HangmanGame>("Hangman", 1);
    qmlRegisterTypesAndRevisions<InAppProductQmlType>("Hangman", 1);
    qmlRegisterTypesAndRevisions<InAppStoreQmlType>("Hangman", 1);
    qmlRegisterTypesAndRevisions<InAppTransaction>("Hangman", 1);
    qmlRegisterModule("Hangman", 1, 0);
}

static const QQmlModuleRegistration hangmanRegistration("Hangman", qml_register_types_Hangman);
