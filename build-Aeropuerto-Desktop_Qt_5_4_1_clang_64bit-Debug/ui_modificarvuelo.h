/********************************************************************************
** Form generated from reading UI file 'modificarvuelo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARVUELO_H
#define UI_MODIFICARVUELO_H

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

class Ui_ModificarVuelo
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
    QComboBox *comboBox_2;

    void setupUi(QDialog *ModificarVuelo)
    {
        if (ModificarVuelo->objectName().isEmpty())
            ModificarVuelo->setObjectName(QStringLiteral("ModificarVuelo"));
        ModificarVuelo->resize(535, 179);
        gridLayout_2 = new QGridLayout(ModificarVuelo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(ModificarVuelo);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        sp_clases = new QSpinBox(ModificarVuelo);
        sp_clases->setObjectName(QStringLiteral("sp_clases"));
        sp_clases->setMinimum(1);
        sp_clases->setMaximum(5);

        gridLayout->addWidget(sp_clases, 2, 4, 1, 1);

        label_5 = new QLabel(ModificarVuelo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        label_6 = new QLabel(ModificarVuelo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        tf_hora = new QLineEdit(ModificarVuelo);
        tf_hora->setObjectName(QStringLiteral("tf_hora"));

        gridLayout->addWidget(tf_hora, 2, 1, 1, 2);

        tf_destino = new QLineEdit(ModificarVuelo);
        tf_destino->setObjectName(QStringLiteral("tf_destino"));

        gridLayout->addWidget(tf_destino, 0, 4, 1, 1);

        label_4 = new QLabel(ModificarVuelo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label = new QLabel(ModificarVuelo);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 3, 1, 1);

        tf_numeroVuelo = new QLineEdit(ModificarVuelo);
        tf_numeroVuelo->setObjectName(QStringLiteral("tf_numeroVuelo"));

        gridLayout->addWidget(tf_numeroVuelo, 1, 2, 1, 1);

        tf_salida = new QLineEdit(ModificarVuelo);
        tf_salida->setObjectName(QStringLiteral("tf_salida"));

        gridLayout->addWidget(tf_salida, 1, 4, 1, 1);

        label_3 = new QLabel(ModificarVuelo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        comboBox = new QComboBox(ModificarVuelo);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(ModificarVuelo);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(ModificarVuelo);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_2->addWidget(comboBox_2, 1, 0, 1, 1);


        retranslateUi(ModificarVuelo);

        QMetaObject::connectSlotsByName(ModificarVuelo);
    } // setupUi

    void retranslateUi(QDialog *ModificarVuelo)
    {
        ModificarVuelo->setWindowTitle(QApplication::translate("ModificarVuelo", "Dialog", 0));
        label_2->setText(QApplication::translate("ModificarVuelo", "Avion", 0));
        label_5->setText(QApplication::translate("ModificarVuelo", "Lugar de Destino", 0));
        label_6->setText(QApplication::translate("ModificarVuelo", "Clases", 0));
        label_4->setText(QApplication::translate("ModificarVuelo", "Hora", 0));
        label->setText(QApplication::translate("ModificarVuelo", "Lugar de Salida", 0));
        label_3->setText(QApplication::translate("ModificarVuelo", "Numero de Vuelo", 0));
        pushButton->setText(QApplication::translate("ModificarVuelo", "Modificar Vuelo", 0));
    } // retranslateUi

};

namespace Ui {
    class ModificarVuelo: public Ui_ModificarVuelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARVUELO_H
