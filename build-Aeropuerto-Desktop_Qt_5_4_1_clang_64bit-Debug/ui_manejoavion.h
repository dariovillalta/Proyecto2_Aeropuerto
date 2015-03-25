/********************************************************************************
** Form generated from reading UI file 'manejoavion.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANEJOAVION_H
#define UI_MANEJOAVION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManejoAvion
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ManejoAvion)
    {
        if (ManejoAvion->objectName().isEmpty())
            ManejoAvion->setObjectName(QStringLiteral("ManejoAvion"));
        ManejoAvion->resize(255, 144);
        gridLayout = new QGridLayout(ManejoAvion);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(ManejoAvion);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(ManejoAvion);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(ManejoAvion);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);


        retranslateUi(ManejoAvion);

        QMetaObject::connectSlotsByName(ManejoAvion);
    } // setupUi

    void retranslateUi(QDialog *ManejoAvion)
    {
        ManejoAvion->setWindowTitle(QApplication::translate("ManejoAvion", "Dialog", 0));
        pushButton->setText(QApplication::translate("ManejoAvion", "Agregar Avion", 0));
        pushButton_3->setText(QApplication::translate("ManejoAvion", "Modificar Avion", 0));
        pushButton_2->setText(QApplication::translate("ManejoAvion", "Eliminar Avion", 0));
    } // retranslateUi

};

namespace Ui {
    class ManejoAvion: public Ui_ManejoAvion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANEJOAVION_H
