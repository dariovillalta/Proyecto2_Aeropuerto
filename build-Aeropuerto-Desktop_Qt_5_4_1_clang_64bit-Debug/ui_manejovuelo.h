/********************************************************************************
** Form generated from reading UI file 'manejovuelo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANEJOVUELO_H
#define UI_MANEJOVUELO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManejoVuelo
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ManejoVuelo)
    {
        if (ManejoVuelo->objectName().isEmpty())
            ManejoVuelo->setObjectName(QStringLiteral("ManejoVuelo"));
        ManejoVuelo->resize(297, 149);
        gridLayout = new QGridLayout(ManejoVuelo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(ManejoVuelo);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(ManejoVuelo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(ManejoVuelo);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);


        retranslateUi(ManejoVuelo);

        QMetaObject::connectSlotsByName(ManejoVuelo);
    } // setupUi

    void retranslateUi(QDialog *ManejoVuelo)
    {
        ManejoVuelo->setWindowTitle(QApplication::translate("ManejoVuelo", "Dialog", 0));
        pushButton->setText(QApplication::translate("ManejoVuelo", "Agregar Vuelo", 0));
        pushButton_2->setText(QApplication::translate("ManejoVuelo", "Modificar Vuelo", 0));
        pushButton_3->setText(QApplication::translate("ManejoVuelo", "Eliminar Vuelo", 0));
    } // retranslateUi

};

namespace Ui {
    class ManejoVuelo: public Ui_ManejoVuelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANEJOVUELO_H
