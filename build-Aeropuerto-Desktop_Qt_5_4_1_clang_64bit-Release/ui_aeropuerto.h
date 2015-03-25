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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QAction *actionCrear_Vuelo;
    QAction *actionCrear_Avion;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableWidget *tableWidget;
    QWidget *page_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBox;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *Aeropuerto)
    {
        if (Aeropuerto->objectName().isEmpty())
            Aeropuerto->setObjectName(QStringLiteral("Aeropuerto"));
        Aeropuerto->resize(720, 428);
        actionCrear_Vuelo = new QAction(Aeropuerto);
        actionCrear_Vuelo->setObjectName(QStringLiteral("actionCrear_Vuelo"));
        actionCrear_Avion = new QAction(Aeropuerto);
        actionCrear_Avion->setObjectName(QStringLiteral("actionCrear_Avion"));
        centralWidget = new QWidget(Aeropuerto);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 661, 371));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tableWidget = new QTableWidget(page);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 10, 621, 361));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 311, 41));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 71, 16));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 71, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 190, 121, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 250, 71, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 310, 71, 16));
        label_6->setFont(font1);
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(390, 70, 71, 16));
        label_7->setFont(font1);
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(390, 130, 131, 16));
        label_8->setFont(font1);
        comboBox = new QComboBox(page_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 70, 191, 26));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(180, 130, 161, 20));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(188, 190, 151, 20));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(168, 250, 171, 20));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(178, 310, 161, 20));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(528, 70, 101, 20));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(528, 130, 101, 20));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 260, 115, 32));
        stackedWidget->addWidget(page_2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 130, 51, 32));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 170, 51, 32));
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
        Aeropuerto->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionCrear_Vuelo);
        menuFile->addAction(actionCrear_Avion);

        retranslateUi(Aeropuerto);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Aeropuerto);
    } // setupUi

    void retranslateUi(QMainWindow *Aeropuerto)
    {
        Aeropuerto->setWindowTitle(QApplication::translate("Aeropuerto", "Aeropuerto", 0));
        actionCrear_Vuelo->setText(QApplication::translate("Aeropuerto", "Crear Vuelo", 0));
        actionCrear_Avion->setText(QApplication::translate("Aeropuerto", "Crear Avion", 0));
        label->setText(QApplication::translate("Aeropuerto", "Compra de Boletos", 0));
        label_2->setText(QApplication::translate("Aeropuerto", "Vuelo", 0));
        label_3->setText(QApplication::translate("Aeropuerto", "Destino", 0));
        label_4->setText(QApplication::translate("Aeropuerto", "Numero de vuelo", 0));
        label_5->setText(QApplication::translate("Aeropuerto", "Clase", 0));
        label_6->setText(QApplication::translate("Aeropuerto", "Hora", 0));
        label_7->setText(QApplication::translate("Aeropuerto", "Avion", 0));
        label_8->setText(QApplication::translate("Aeropuerto", "Numero de Asiento", 0));
        label_9->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        label_10->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        label_11->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        label_12->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        label_13->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        label_14->setText(QApplication::translate("Aeropuerto", "NULL", 0));
        pushButton_3->setText(QApplication::translate("Aeropuerto", "Comprar", 0));
        pushButton->setText(QApplication::translate("Aeropuerto", "->", 0));
        pushButton_2->setText(QApplication::translate("Aeropuerto", "<-", 0));
        menuFile->setTitle(QApplication::translate("Aeropuerto", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class Aeropuerto: public Ui_Aeropuerto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AEROPUERTO_H
