/********************************************************************************
** Form generated from reading UI file 'aeropuerto.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AEROPUERTO_H
#define UI_AEROPUERTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Aeropuerto
{
public:
    QAction *actionAgregar_Vuelo;
    QAction *actionModificar_Vuelo;
    QAction *actionAgregar_Avion;
    QAction *actionCalcular_Horas;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableWidget *tableWidget;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *tf_clase;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *tf_numAsiento;
    QLabel *label_4;
    QLabel *lb_destino;
    QLabel *lb_hora;
    QLabel *label_7;
    QLabel *lb_avion;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLabel *lb_numVuelo;
    QPushButton *pushButton_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuCrear_Vuelo;
    QMenu *menuCrear_Avion;

    void setupUi(QMainWindow *Aeropuerto)
    {
        if (Aeropuerto->objectName().isEmpty())
            Aeropuerto->setObjectName(QStringLiteral("Aeropuerto"));
        Aeropuerto->resize(720, 349);
        actionAgregar_Vuelo = new QAction(Aeropuerto);
        actionAgregar_Vuelo->setObjectName(QStringLiteral("actionAgregar_Vuelo"));
        actionModificar_Vuelo = new QAction(Aeropuerto);
        actionModificar_Vuelo->setObjectName(QStringLiteral("actionModificar_Vuelo"));
        actionAgregar_Avion = new QAction(Aeropuerto);
        actionAgregar_Avion->setObjectName(QStringLiteral("actionAgregar_Avion"));
        actionCalcular_Horas = new QAction(Aeropuerto);
        actionCalcular_Horas->setObjectName(QStringLiteral("actionCalcular_Horas"));
        centralWidget = new QWidget(Aeropuerto);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tableWidget = new QTableWidget(page);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 631, 231));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tf_clase = new QLineEdit(page_2);
        tf_clase->setObjectName(QStringLiteral("tf_clase"));

        gridLayout->addWidget(tf_clase, 6, 1, 1, 1);

        comboBox = new QComboBox(page_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(36);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 1, 1, 3);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        tf_numAsiento = new QLineEdit(page_2);
        tf_numAsiento->setObjectName(QStringLiteral("tf_numAsiento"));

        gridLayout->addWidget(tf_numAsiento, 5, 1, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 2, 1, 1);

        lb_destino = new QLabel(page_2);
        lb_destino->setObjectName(QStringLiteral("lb_destino"));
        lb_destino->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lb_destino, 4, 1, 1, 1);

        lb_hora = new QLabel(page_2);
        lb_hora->setObjectName(QStringLiteral("lb_hora"));
        lb_hora->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lb_hora, 9, 1, 1, 1);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        lb_avion = new QLabel(page_2);
        lb_avion->setObjectName(QStringLiteral("lb_avion"));
        lb_avion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lb_avion, 1, 3, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 9, 3, 1, 1);

        lb_numVuelo = new QLabel(page_2);
        lb_numVuelo->setObjectName(QStringLiteral("lb_numVuelo"));
        lb_numVuelo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lb_numVuelo, 4, 3, 1, 1);

        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 9, 2, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 2, 1);

        Aeropuerto->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Aeropuerto);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Aeropuerto->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Aeropuerto);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Aeropuerto->setStatusBar(statusBar);
        menuBar = new QMenuBar(Aeropuerto);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuCrear_Vuelo = new QMenu(menuFile);
        menuCrear_Vuelo->setObjectName(QStringLiteral("menuCrear_Vuelo"));
        menuCrear_Avion = new QMenu(menuFile);
        menuCrear_Avion->setObjectName(QStringLiteral("menuCrear_Avion"));
        Aeropuerto->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(menuCrear_Vuelo->menuAction());
        menuFile->addAction(menuCrear_Avion->menuAction());
        menuFile->addAction(actionCalcular_Horas);
        menuCrear_Vuelo->addAction(actionAgregar_Vuelo);
        menuCrear_Vuelo->addAction(actionModificar_Vuelo);
        menuCrear_Avion->addAction(actionAgregar_Avion);

        retranslateUi(Aeropuerto);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Aeropuerto);
    } // setupUi

    void retranslateUi(QMainWindow *Aeropuerto)
    {
        Aeropuerto->setWindowTitle(QApplication::translate("Aeropuerto", "Aeropuerto", 0));
        actionAgregar_Vuelo->setText(QApplication::translate("Aeropuerto", "Agregar Vuelo", 0));
        actionModificar_Vuelo->setText(QApplication::translate("Aeropuerto", "Modificar Vuelo", 0));
        actionAgregar_Avion->setText(QApplication::translate("Aeropuerto", "Agregar Avion", 0));
        actionCalcular_Horas->setText(QApplication::translate("Aeropuerto", "Calcular Horas", 0));
        pushButton->setText(QApplication::translate("Aeropuerto", "->", 0));
        pushButton_2->setText(QApplication::translate("Aeropuerto", "<-", 0));
        label_5->setText(QApplication::translate("Aeropuerto", "Clase", 0));
        label_6->setText(QApplication::translate("Aeropuerto", "Hora", 0));
        label_2->setText(QApplication::translate("Aeropuerto", "Vuelo", 0));
        label->setText(QApplication::translate("Aeropuerto", "Compra de Boletos", 0));
        label_8->setText(QApplication::translate("Aeropuerto", "Numero de Asiento", 0));
        label_4->setText(QApplication::translate("Aeropuerto", "Numero de vuelo", 0));
        lb_destino->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        lb_hora->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        label_7->setText(QApplication::translate("Aeropuerto", "Avion", 0));
        lb_avion->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        label_3->setText(QApplication::translate("Aeropuerto", "Destino", 0));
        pushButton_3->setText(QApplication::translate("Aeropuerto", "Comprar", 0));
        lb_numVuelo->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        pushButton_4->setText(QApplication::translate("Aeropuerto", "Update", 0));
        menuFile->setTitle(QApplication::translate("Aeropuerto", "File", 0));
        menuCrear_Vuelo->setTitle(QApplication::translate("Aeropuerto", "Crear Vuelo", 0));
        menuCrear_Avion->setTitle(QApplication::translate("Aeropuerto", "Crear Avion", 0));
    } // retranslateUi

};

namespace Ui {
    class Aeropuerto: public Ui_Aeropuerto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AEROPUERTO_H
