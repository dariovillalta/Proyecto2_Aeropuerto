/********************************************************************************
** Form generated from reading UI file 'crearavion.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARAVION_H
#define UI_CREARAVION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CrearAvion
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *sp_tripulacion;
    QLabel *label_6;
    QDoubleSpinBox *sp_pesoVacio;
    QLabel *label_2;
    QSpinBox *sp_pasajeros;
    QLabel *label_7;
    QDoubleSpinBox *sp_pesoMaximo;
    QLabel *label_3;
    QDoubleSpinBox *sp_altura;
    QLabel *label_8;
    QLabel *label_4;
    QDoubleSpinBox *sp_longitud;
    QLabel *label_5;
    QDoubleSpinBox *sp_velocidadMaxima;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *CrearAvion)
    {
        if (CrearAvion->objectName().isEmpty())
            CrearAvion->setObjectName(QStringLiteral("CrearAvion"));
        CrearAvion->resize(576, 220);
        verticalLayout = new QVBoxLayout(CrearAvion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CrearAvion);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        sp_tripulacion = new QSpinBox(CrearAvion);
        sp_tripulacion->setObjectName(QStringLiteral("sp_tripulacion"));
        sp_tripulacion->setMaximum(22);

        gridLayout->addWidget(sp_tripulacion, 0, 1, 1, 1);

        label_6 = new QLabel(CrearAvion);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        sp_pesoVacio = new QDoubleSpinBox(CrearAvion);
        sp_pesoVacio->setObjectName(QStringLiteral("sp_pesoVacio"));

        gridLayout->addWidget(sp_pesoVacio, 0, 3, 1, 1);

        label_2 = new QLabel(CrearAvion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        sp_pasajeros = new QSpinBox(CrearAvion);
        sp_pasajeros->setObjectName(QStringLiteral("sp_pasajeros"));

        gridLayout->addWidget(sp_pasajeros, 1, 1, 1, 1);

        label_7 = new QLabel(CrearAvion);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        sp_pesoMaximo = new QDoubleSpinBox(CrearAvion);
        sp_pesoMaximo->setObjectName(QStringLiteral("sp_pesoMaximo"));

        gridLayout->addWidget(sp_pesoMaximo, 1, 3, 1, 1);

        label_3 = new QLabel(CrearAvion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        sp_altura = new QDoubleSpinBox(CrearAvion);
        sp_altura->setObjectName(QStringLiteral("sp_altura"));

        gridLayout->addWidget(sp_altura, 2, 1, 1, 1);

        label_8 = new QLabel(CrearAvion);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 2, 2, 1, 1);

        label_4 = new QLabel(CrearAvion);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        sp_longitud = new QDoubleSpinBox(CrearAvion);
        sp_longitud->setObjectName(QStringLiteral("sp_longitud"));

        gridLayout->addWidget(sp_longitud, 3, 1, 1, 1);

        label_5 = new QLabel(CrearAvion);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        sp_velocidadMaxima = new QDoubleSpinBox(CrearAvion);
        sp_velocidadMaxima->setObjectName(QStringLiteral("sp_velocidadMaxima"));

        gridLayout->addWidget(sp_velocidadMaxima, 4, 1, 1, 1);

        comboBox = new QComboBox(CrearAvion);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton = new QPushButton(CrearAvion);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(CrearAvion);

        QMetaObject::connectSlotsByName(CrearAvion);
    } // setupUi

    void retranslateUi(QDialog *CrearAvion)
    {
        CrearAvion->setWindowTitle(QApplication::translate("CrearAvion", "Dialog", 0));
        label->setText(QApplication::translate("CrearAvion", "Capacidad de Tripulacion", 0));
        label_6->setText(QApplication::translate("CrearAvion", "Peso Vacio", 0));
        label_2->setText(QApplication::translate("CrearAvion", "Capacidad de Pasajeros", 0));
        label_7->setText(QApplication::translate("CrearAvion", "Peso Maximo", 0));
        label_3->setText(QApplication::translate("CrearAvion", "Altura", 0));
        label_8->setText(QApplication::translate("CrearAvion", "Modelo", 0));
        label_4->setText(QApplication::translate("CrearAvion", "Longitud", 0));
        label_5->setText(QApplication::translate("CrearAvion", "Velocidad Maxima", 0));
        pushButton->setText(QApplication::translate("CrearAvion", "Agregar Avion", 0));
    } // retranslateUi

};

namespace Ui {
    class CrearAvion: public Ui_CrearAvion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARAVION_H
