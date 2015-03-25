/********************************************************************************
** Form generated from reading UI file 'eliminaravion.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARAVION_H
#define UI_ELIMINARAVION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_EliminarAvion
{
public:

    void setupUi(QDialog *EliminarAvion)
    {
        if (EliminarAvion->objectName().isEmpty())
            EliminarAvion->setObjectName(QStringLiteral("EliminarAvion"));
        EliminarAvion->resize(400, 300);

        retranslateUi(EliminarAvion);

        QMetaObject::connectSlotsByName(EliminarAvion);
    } // setupUi

    void retranslateUi(QDialog *EliminarAvion)
    {
        EliminarAvion->setWindowTitle(QApplication::translate("EliminarAvion", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class EliminarAvion: public Ui_EliminarAvion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARAVION_H
