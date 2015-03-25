/********************************************************************************
** Form generated from reading UI file 'crearboleto.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARBOLETO_H
#define UI_CREARBOLETO_H

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

class Ui_CrearBoleto
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cb_avion;
    QLabel *label_5;
    QLineEdit *tf_numAsiento;
    QLabel *label_2;
    QLineEdit *tf_hora;
    QLabel *label_6;
    QLineEdit *tf_clase;
    QLineEdit *tf_destino;
    QLabel *label_7;
    QLineEdit *tf_numVuelo;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *tf_salida;
    QPushButton *pushButton;

    void setupUi(QDialog *CrearBoleto)
    {
        if (CrearBoleto->objectName().isEmpty())
            CrearBoleto->setObjectName(QStringLiteral("CrearBoleto"));
        CrearBoleto->resize(630, 175);
        gridLayout_2 = new QGridLayout(CrearBoleto);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CrearBoleto);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cb_avion = new QComboBox(CrearBoleto);
        cb_avion->setObjectName(QStringLiteral("cb_avion"));

        gridLayout->addWidget(cb_avion, 0, 1, 1, 3);

        label_5 = new QLabel(CrearBoleto);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 4, 1, 2);

        tf_numAsiento = new QLineEdit(CrearBoleto);
        tf_numAsiento->setObjectName(QStringLiteral("tf_numAsiento"));

        gridLayout->addWidget(tf_numAsiento, 0, 6, 1, 1);

        label_2 = new QLabel(CrearBoleto);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tf_hora = new QLineEdit(CrearBoleto);
        tf_hora->setObjectName(QStringLiteral("tf_hora"));

        gridLayout->addWidget(tf_hora, 1, 3, 1, 1);

        label_6 = new QLabel(CrearBoleto);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 4, 1, 1);

        tf_clase = new QLineEdit(CrearBoleto);
        tf_clase->setObjectName(QStringLiteral("tf_clase"));

        gridLayout->addWidget(tf_clase, 1, 5, 1, 2);

        tf_destino = new QLineEdit(CrearBoleto);
        tf_destino->setObjectName(QStringLiteral("tf_destino"));

        gridLayout->addWidget(tf_destino, 2, 3, 1, 1);

        label_7 = new QLabel(CrearBoleto);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 4, 1, 2);

        tf_numVuelo = new QLineEdit(CrearBoleto);
        tf_numVuelo->setObjectName(QStringLiteral("tf_numVuelo"));

        gridLayout->addWidget(tf_numVuelo, 2, 6, 1, 1);

        label_4 = new QLabel(CrearBoleto);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        label_3 = new QLabel(CrearBoleto);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        tf_salida = new QLineEdit(CrearBoleto);
        tf_salida->setObjectName(QStringLiteral("tf_salida"));

        gridLayout->addWidget(tf_salida, 3, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(CrearBoleto);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(CrearBoleto);

        QMetaObject::connectSlotsByName(CrearBoleto);
    } // setupUi

    void retranslateUi(QDialog *CrearBoleto)
    {
        CrearBoleto->setWindowTitle(QApplication::translate("CrearBoleto", "Dialog", 0));
        label->setText(QApplication::translate("CrearBoleto", "Avion", 0));
        label_5->setText(QApplication::translate("CrearBoleto", "Numero de Asiento", 0));
        label_2->setText(QApplication::translate("CrearBoleto", "Hora", 0));
        label_6->setText(QApplication::translate("CrearBoleto", "Clase", 0));
        label_7->setText(QApplication::translate("CrearBoleto", "Numero de Vuelo", 0));
        label_4->setText(QApplication::translate("CrearBoleto", "Lugar de Salida", 0));
        label_3->setText(QApplication::translate("CrearBoleto", "Lugar de Destino", 0));
        pushButton->setText(QApplication::translate("CrearBoleto", "Agregar Boleto", 0));
    } // retranslateUi

};

namespace Ui {
    class CrearBoleto: public Ui_CrearBoleto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARBOLETO_H
