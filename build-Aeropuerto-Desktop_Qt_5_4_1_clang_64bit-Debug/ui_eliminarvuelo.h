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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EliminarVuelo
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
    QLineEdit *tf_avion;
    QComboBox *comboBox_2;
    QPushButton *pushButton;

    void setupUi(QDialog *EliminarVuelo)
    {
        if (EliminarVuelo->objectName().isEmpty())
            EliminarVuelo->setObjectName(QStringLiteral("EliminarVuelo"));
        EliminarVuelo->resize(571, 177);
        gridLayout_2 = new QGridLayout(EliminarVuelo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(EliminarVuelo);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        sp_clases = new QSpinBox(EliminarVuelo);
        sp_clases->setObjectName(QStringLiteral("sp_clases"));
        sp_clases->setMinimum(1);
        sp_clases->setMaximum(5);

        gridLayout->addWidget(sp_clases, 2, 4, 1, 1);

        label_5 = new QLabel(EliminarVuelo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        label_6 = new QLabel(EliminarVuelo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        tf_hora = new QLineEdit(EliminarVuelo);
        tf_hora->setObjectName(QStringLiteral("tf_hora"));

        gridLayout->addWidget(tf_hora, 2, 1, 1, 2);

        tf_destino = new QLineEdit(EliminarVuelo);
        tf_destino->setObjectName(QStringLiteral("tf_destino"));

        gridLayout->addWidget(tf_destino, 0, 4, 1, 1);

        label_4 = new QLabel(EliminarVuelo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label = new QLabel(EliminarVuelo);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 3, 1, 1);

        tf_numeroVuelo = new QLineEdit(EliminarVuelo);
        tf_numeroVuelo->setObjectName(QStringLiteral("tf_numeroVuelo"));

        gridLayout->addWidget(tf_numeroVuelo, 1, 2, 1, 1);

        tf_salida = new QLineEdit(EliminarVuelo);
        tf_salida->setObjectName(QStringLiteral("tf_salida"));

        gridLayout->addWidget(tf_salida, 1, 4, 1, 1);

        label_3 = new QLabel(EliminarVuelo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        tf_avion = new QLineEdit(EliminarVuelo);
        tf_avion->setObjectName(QStringLiteral("tf_avion"));

        gridLayout->addWidget(tf_avion, 0, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(EliminarVuelo);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_2->addWidget(comboBox_2, 1, 0, 1, 1);

        pushButton = new QPushButton(EliminarVuelo);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(EliminarVuelo);

        QMetaObject::connectSlotsByName(EliminarVuelo);
    } // setupUi

    void retranslateUi(QDialog *EliminarVuelo)
    {
        EliminarVuelo->setWindowTitle(QApplication::translate("EliminarVuelo", "Dialog", 0));
        label_2->setText(QApplication::translate("EliminarVuelo", "Avion", 0));
        label_5->setText(QApplication::translate("EliminarVuelo", "Lugar de Destino", 0));
        label_6->setText(QApplication::translate("EliminarVuelo", "Clases", 0));
        label_4->setText(QApplication::translate("EliminarVuelo", "Hora", 0));
        label->setText(QApplication::translate("EliminarVuelo", "Lugar de Salida", 0));
        label_3->setText(QApplication::translate("EliminarVuelo", "Numero de Vuelo", 0));
        pushButton->setText(QApplication::translate("EliminarVuelo", "Eliminar Vuelo", 0));
    } // retranslateUi

};

namespace Ui {
    class EliminarVuelo: public Ui_EliminarVuelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARVUELO_H
