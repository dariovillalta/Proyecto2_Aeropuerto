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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EliminarAvion
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
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
    QLabel *label_4;
    QDoubleSpinBox *sp_longitud;
    QLabel *label_5;
    QDoubleSpinBox *sp_velocidadMaxima;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *EliminarAvion)
    {
        if (EliminarAvion->objectName().isEmpty())
            EliminarAvion->setObjectName(QStringLiteral("EliminarAvion"));
        EliminarAvion->resize(593, 259);
        gridLayout_3 = new QGridLayout(EliminarAvion);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(EliminarAvion);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        sp_tripulacion = new QSpinBox(EliminarAvion);
        sp_tripulacion->setObjectName(QStringLiteral("sp_tripulacion"));

        gridLayout->addWidget(sp_tripulacion, 0, 1, 1, 1);

        label_6 = new QLabel(EliminarAvion);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        sp_pesoVacio = new QDoubleSpinBox(EliminarAvion);
        sp_pesoVacio->setObjectName(QStringLiteral("sp_pesoVacio"));

        gridLayout->addWidget(sp_pesoVacio, 0, 3, 1, 1);

        label_2 = new QLabel(EliminarAvion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        sp_pasajeros = new QSpinBox(EliminarAvion);
        sp_pasajeros->setObjectName(QStringLiteral("sp_pasajeros"));

        gridLayout->addWidget(sp_pasajeros, 1, 1, 1, 1);

        label_7 = new QLabel(EliminarAvion);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        sp_pesoMaximo = new QDoubleSpinBox(EliminarAvion);
        sp_pesoMaximo->setObjectName(QStringLiteral("sp_pesoMaximo"));

        gridLayout->addWidget(sp_pesoMaximo, 1, 3, 1, 1);

        label_3 = new QLabel(EliminarAvion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        sp_altura = new QDoubleSpinBox(EliminarAvion);
        sp_altura->setObjectName(QStringLiteral("sp_altura"));

        gridLayout->addWidget(sp_altura, 2, 1, 1, 1);

        label_4 = new QLabel(EliminarAvion);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        sp_longitud = new QDoubleSpinBox(EliminarAvion);
        sp_longitud->setObjectName(QStringLiteral("sp_longitud"));

        gridLayout->addWidget(sp_longitud, 3, 1, 1, 1);

        label_5 = new QLabel(EliminarAvion);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        sp_velocidadMaxima = new QDoubleSpinBox(EliminarAvion);
        sp_velocidadMaxima->setObjectName(QStringLiteral("sp_velocidadMaxima"));

        gridLayout->addWidget(sp_velocidadMaxima, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        comboBox = new QComboBox(EliminarAvion);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 1, 0, 1, 1);

        pushButton = new QPushButton(EliminarAvion);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(EliminarAvion);

        QMetaObject::connectSlotsByName(EliminarAvion);
    } // setupUi

    void retranslateUi(QDialog *EliminarAvion)
    {
        EliminarAvion->setWindowTitle(QApplication::translate("EliminarAvion", "Dialog", 0));
        label->setText(QApplication::translate("EliminarAvion", "Capacidad de Tripulacion", 0));
        label_6->setText(QApplication::translate("EliminarAvion", "Peso Vacio", 0));
        label_2->setText(QApplication::translate("EliminarAvion", "Capacidad de Pasajeros", 0));
        label_7->setText(QApplication::translate("EliminarAvion", "Peso Maximo", 0));
        label_3->setText(QApplication::translate("EliminarAvion", "Altura", 0));
        label_4->setText(QApplication::translate("EliminarAvion", "Longitud", 0));
        label_5->setText(QApplication::translate("EliminarAvion", "Velocidad Maxima", 0));
        pushButton->setText(QApplication::translate("EliminarAvion", "Eliminar Avion", 0));
    } // retranslateUi

};

namespace Ui {
    class EliminarAvion: public Ui_EliminarAvion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARAVION_H
