/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *textBox;
    QGridLayout *gridLayout;
    QPushButton *btnOpenBracket;
    QPushButton *btn6;
    QPushButton *btnMinus;
    QPushButton *btnSin;
    QPushButton *btn1;
    QPushButton *btnCotan;
    QPushButton *btnPow;
    QPushButton *btn4;
    QPushButton *btnPlus;
    QPushButton *btnClear;
    QPushButton *btn7;
    QPushButton *btnTan;
    QPushButton *btnMultiplicate;
    QPushButton *btn8;
    QPushButton *btnCos;
    QPushButton *btn5;
    QPushButton *btn;
    QPushButton *btn3;
    QPushButton *btnCloseBracket;
    QPushButton *btn9;
    QPushButton *btnEquals;
    QPushButton *btn0;
    QPushButton *btnDot;
    QPushButton *BtnDivide;
    QPushButton *btnFact;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(430, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-1, 19, 431, 581));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBox = new QLineEdit(verticalLayoutWidget);
        textBox->setObjectName("textBox");
        textBox->setMinimumSize(QSize(0, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro")});
        font.setPointSize(12);
        textBox->setFont(font);
        textBox->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        textBox->setReadOnly(true);

        verticalLayout->addWidget(textBox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnOpenBracket = new QPushButton(verticalLayoutWidget);
        btnOpenBracket->setObjectName("btnOpenBracket");
        btnOpenBracket->setEnabled(true);
        btnOpenBracket->setMinimumSize(QSize(80, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(20);
        font1.setBold(true);
        btnOpenBracket->setFont(font1);

        gridLayout->addWidget(btnOpenBracket, 2, 4, 1, 1);

        btn6 = new QPushButton(verticalLayoutWidget);
        btn6->setObjectName("btn6");
        btn6->setMinimumSize(QSize(80, 80));
        btn6->setFont(font1);

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btnMinus = new QPushButton(verticalLayoutWidget);
        btnMinus->setObjectName("btnMinus");
        btnMinus->setMinimumSize(QSize(80, 80));
        btnMinus->setFont(font1);

        gridLayout->addWidget(btnMinus, 2, 3, 1, 1);

        btnSin = new QPushButton(verticalLayoutWidget);
        btnSin->setObjectName("btnSin");
        btnSin->setMinimumSize(QSize(80, 80));
        btnSin->setFont(font1);

        gridLayout->addWidget(btnSin, 0, 0, 1, 1);

        btn1 = new QPushButton(verticalLayoutWidget);
        btn1->setObjectName("btn1");
        btn1->setMinimumSize(QSize(80, 80));
        btn1->setFont(font1);

        gridLayout->addWidget(btn1, 3, 0, 1, 1);

        btnCotan = new QPushButton(verticalLayoutWidget);
        btnCotan->setObjectName("btnCotan");
        btnCotan->setMinimumSize(QSize(80, 80));
        btnCotan->setFont(font1);

        gridLayout->addWidget(btnCotan, 0, 3, 1, 1);

        btnPow = new QPushButton(verticalLayoutWidget);
        btnPow->setObjectName("btnPow");
        btnPow->setMinimumSize(QSize(80, 80));
        btnPow->setFont(font1);

        gridLayout->addWidget(btnPow, 1, 4, 1, 1);

        btn4 = new QPushButton(verticalLayoutWidget);
        btn4->setObjectName("btn4");
        btn4->setMinimumSize(QSize(80, 80));
        btn4->setFont(font1);

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btnPlus = new QPushButton(verticalLayoutWidget);
        btnPlus->setObjectName("btnPlus");
        btnPlus->setMinimumSize(QSize(80, 80));
        btnPlus->setFont(font1);

        gridLayout->addWidget(btnPlus, 1, 3, 1, 1);

        btnClear = new QPushButton(verticalLayoutWidget);
        btnClear->setObjectName("btnClear");
        btnClear->setMinimumSize(QSize(80, 80));
        btnClear->setFont(font1);

        gridLayout->addWidget(btnClear, 0, 4, 1, 1);

        btn7 = new QPushButton(verticalLayoutWidget);
        btn7->setObjectName("btn7");
        btn7->setMinimumSize(QSize(80, 80));
        btn7->setFont(font1);

        gridLayout->addWidget(btn7, 1, 0, 1, 1);

        btnTan = new QPushButton(verticalLayoutWidget);
        btnTan->setObjectName("btnTan");
        btnTan->setMinimumSize(QSize(80, 80));
        btnTan->setFont(font1);

        gridLayout->addWidget(btnTan, 0, 2, 1, 1);

        btnMultiplicate = new QPushButton(verticalLayoutWidget);
        btnMultiplicate->setObjectName("btnMultiplicate");
        btnMultiplicate->setMinimumSize(QSize(80, 80));
        btnMultiplicate->setFont(font1);

        gridLayout->addWidget(btnMultiplicate, 3, 3, 1, 1);

        btn8 = new QPushButton(verticalLayoutWidget);
        btn8->setObjectName("btn8");
        btn8->setMinimumSize(QSize(80, 80));
        btn8->setFont(font1);

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        btnCos = new QPushButton(verticalLayoutWidget);
        btnCos->setObjectName("btnCos");
        btnCos->setMinimumSize(QSize(80, 80));
        btnCos->setFont(font1);

        gridLayout->addWidget(btnCos, 0, 1, 1, 1);

        btn5 = new QPushButton(verticalLayoutWidget);
        btn5->setObjectName("btn5");
        btn5->setMinimumSize(QSize(80, 80));
        btn5->setFont(font1);

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn = new QPushButton(verticalLayoutWidget);
        btn->setObjectName("btn");
        btn->setMinimumSize(QSize(80, 80));
        btn->setFont(font1);

        gridLayout->addWidget(btn, 3, 1, 1, 1);

        btn3 = new QPushButton(verticalLayoutWidget);
        btn3->setObjectName("btn3");
        btn3->setMinimumSize(QSize(80, 80));
        btn3->setFont(font1);

        gridLayout->addWidget(btn3, 3, 2, 1, 1);

        btnCloseBracket = new QPushButton(verticalLayoutWidget);
        btnCloseBracket->setObjectName("btnCloseBracket");
        btnCloseBracket->setEnabled(true);
        btnCloseBracket->setMinimumSize(QSize(80, 80));
        btnCloseBracket->setFont(font1);

        gridLayout->addWidget(btnCloseBracket, 3, 4, 1, 1);

        btn9 = new QPushButton(verticalLayoutWidget);
        btn9->setObjectName("btn9");
        btn9->setMinimumSize(QSize(80, 80));
        btn9->setFont(font1);

        gridLayout->addWidget(btn9, 1, 2, 1, 1);

        btnEquals = new QPushButton(verticalLayoutWidget);
        btnEquals->setObjectName("btnEquals");
        btnEquals->setMinimumSize(QSize(80, 80));
        btnEquals->setFont(font1);

        gridLayout->addWidget(btnEquals, 4, 0, 1, 1);

        btn0 = new QPushButton(verticalLayoutWidget);
        btn0->setObjectName("btn0");
        btn0->setMinimumSize(QSize(80, 80));
        btn0->setFont(font1);

        gridLayout->addWidget(btn0, 4, 1, 1, 1);

        btnDot = new QPushButton(verticalLayoutWidget);
        btnDot->setObjectName("btnDot");
        btnDot->setEnabled(true);
        btnDot->setMinimumSize(QSize(80, 80));
        btnDot->setFont(font1);

        gridLayout->addWidget(btnDot, 4, 2, 1, 1);

        BtnDivide = new QPushButton(verticalLayoutWidget);
        BtnDivide->setObjectName("BtnDivide");
        BtnDivide->setMinimumSize(QSize(80, 80));
        BtnDivide->setFont(font1);

        gridLayout->addWidget(BtnDivide, 4, 3, 1, 1);

        btnFact = new QPushButton(verticalLayoutWidget);
        btnFact->setObjectName("btnFact");
        btnFact->setEnabled(true);
        btnFact->setMinimumSize(QSize(80, 80));
        btnFact->setFont(font1);

        gridLayout->addWidget(btnFact, 4, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBox->setText(QString());
        btnOpenBracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnSin->setText(QCoreApplication::translate("MainWindow", "SIN", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnCotan->setText(QCoreApplication::translate("MainWindow", "CTG", nullptr));
        btnPow->setText(QCoreApplication::translate("MainWindow", "POW", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnTan->setText(QCoreApplication::translate("MainWindow", "TG", nullptr));
        btnMultiplicate->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnCos->setText(QCoreApplication::translate("MainWindow", "COS", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnCloseBracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnEquals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        BtnDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnFact->setText(QCoreApplication::translate("MainWindow", "!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
