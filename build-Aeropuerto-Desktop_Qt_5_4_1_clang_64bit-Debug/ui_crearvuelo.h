/********************************************************************************
** Form generated from reading UI file 'crearvuelo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARVUELO_H
#define UI_CREARVUELO_H

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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CrearVuelo
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *sp_clases;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *tf_hora;
    QLineEdit *tf_destino;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *tf_numeroVuelo;
    QLineEdit *tf_salida;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *CrearVuelo)
    {
        if (CrearVuelo->objectName().isEmpty())
            CrearVuelo->setObjectName(QStringLiteral("CrearVuelo"));
        CrearVuelo->resize(615, 201);
        gridLayout_2 = new QGridLayout(CrearVuelo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(CrearVuelo);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        sp_clases = new QSpinBox(CrearVuelo);
        sp_clases->setObjectName(QStringLiteral("sp_clases"));
        sp_clases->setMinimum(1);
        sp_clases->setMaximum(5);

        gridLayout->addWidget(sp_clases, 2, 4, 1, 1);

        label_5 = new QLabel(CrearVuelo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        label_6 = new QLabel(CrearVuelo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        tf_hora = new QLineEdit(CrearVuelo);
        tf_hora->setObjectName(QStringLiteral("tf_hora"));

        gridLayout->addWidget(tf_hora, 2, 1, 1, 2);

        tf_destino = new QLineEdit(CrearVuelo);
        tf_destino->setObjectName(QStringLiteral("tf_destino"));

        gridLayout->addWidget(tf_destino, 0, 4, 1, 1);

        label_4 = new QLabel(CrearVuelo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label = new QLabel(CrearVuelo);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 3, 1, 1);

        tf_numeroVuelo = new QLineEdit(CrearVuelo);
        tf_numeroVuelo->setObjectName(QStringLiteral("tf_numeroVuelo"));

        gridLayout->addWidget(tf_numeroVuelo, 1, 2, 1, 1);

        tf_salida = new QLineEdit(CrearVuelo);
        tf_salida->setObjectName(QStringLiteral("tf_salida"));

        gridLayout->addWidget(tf_salida, 1, 4, 1, 1);

        label_3 = new QLabel(CrearVuelo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        comboBox = new QComboBox(CrearVuelo);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(CrearVuelo);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(CrearVuelo);

        QMetaObject::connectSlotsByName(CrearVuelo);
    } // setupUi

    void retranslateUi(QDialog *CrearVuelo)
    {
        CrearVuelo->setWindowTitle(QApplication::translate("CrearVuelo", "Dialog", 0));
        label_2->setText(QApplication::translate("CrearVuelo", "Avion", 0));
        label_5->setText(QApplication::translate("CrearVuelo", "Lugar de Destino", 0));
        label_6->setText(QApplication::translate("CrearVuelo", "Clases", 0));
        label_4->setText(QApplication::translate("CrearVuelo", "Hora", 0));
        label->setText(QApplication::translate("CrearVuelo", "Lugar de Salida", 0));
        label_3->setText(QApplication::translate("CrearVuelo", "Numero de Vuelo", 0));
        pushButton->setText(QApplication::translate("CrearVuelo", "Agregar Vuelo", 0));
    } // retranslateUi

};

namespace Ui {
    class CrearVuelo: public Ui_CrearVuelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARVUELO_H
