/********************************************************************************
** Form generated from reading UI file 'horas.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HORAS_H
#define UI_HORAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Horas
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Horas)
    {
        if (Horas->objectName().isEmpty())
            Horas->setObjectName(QStringLiteral("Horas"));
        Horas->resize(432, 205);
        gridLayout = new QGridLayout(Horas);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_2 = new QPushButton(Horas);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 4, 0, 1, 1);

        comboBox = new QComboBox(Horas);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 3, 2, 1, 1);

        lineEdit_3 = new QLineEdit(Horas);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 2, 1, 1);

        label_3 = new QLabel(Horas);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(Horas);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(Horas);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(Horas);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 4, 2, 1, 1);

        lineEdit_2 = new QLineEdit(Horas);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        label_2 = new QLabel(Horas);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(Horas);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);


        retranslateUi(Horas);

        QMetaObject::connectSlotsByName(Horas);
    } // setupUi

    void retranslateUi(QDialog *Horas)
    {
        Horas->setWindowTitle(QApplication::translate("Horas", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("Horas", "Update", 0));
        label_3->setText(QApplication::translate("Horas", "Presion", 0));
        label_4->setText(QApplication::translate("Horas", "Modelo", 0));
        label->setText(QApplication::translate("Horas", "Distancia", 0));
        pushButton->setText(QApplication::translate("Horas", "Calcular", 0));
        label_2->setText(QApplication::translate("Horas", "Velocidad", 0));
    } // retranslateUi

};

namespace Ui {
    class Horas: public Ui_Horas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HORAS_H
