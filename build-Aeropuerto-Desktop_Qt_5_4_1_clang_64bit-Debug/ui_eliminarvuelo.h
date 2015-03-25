/********************************************************************************
** Form generated from reading UI file 'eliminarvuelo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARVUELO_H
#define UI_ELIMINARVUELO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_EliminarVuelo
{
public:

    void setupUi(QDialog *EliminarVuelo)
    {
        if (EliminarVuelo->objectName().isEmpty())
            EliminarVuelo->setObjectName(QStringLiteral("EliminarVuelo"));
        EliminarVuelo->resize(400, 300);

        retranslateUi(EliminarVuelo);

        QMetaObject::connectSlotsByName(EliminarVuelo);
    } // setupUi

    void retranslateUi(QDialog *EliminarVuelo)
    {
        EliminarVuelo->setWindowTitle(QApplication::translate("EliminarVuelo", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class EliminarVuelo: public Ui_EliminarVuelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARVUELO_H
