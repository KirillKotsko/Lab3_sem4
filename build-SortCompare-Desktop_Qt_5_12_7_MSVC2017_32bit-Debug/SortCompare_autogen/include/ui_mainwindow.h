/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *generateButton;
    QPushButton *showButton;
    QSpinBox *ammountBox;
    QComboBox *algoBox1;
    QComboBox *algoBox2;
    QPushButton *runButton;
    QPushButton *res1;
    QPushButton *res2;
    QLabel *status_1;
    QLabel *status_2;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *modBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 472);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 451, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(18);
        label->setFont(font);
        generateButton = new QPushButton(centralwidget);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));
        generateButton->setGeometry(QRect(60, 90, 191, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(14);
        generateButton->setFont(font1);
        showButton = new QPushButton(centralwidget);
        showButton->setObjectName(QString::fromUtf8("showButton"));
        showButton->setEnabled(false);
        showButton->setGeometry(QRect(340, 100, 151, 51));
        showButton->setFont(font1);
        ammountBox = new QSpinBox(centralwidget);
        ammountBox->setObjectName(QString::fromUtf8("ammountBox"));
        ammountBox->setGeometry(QRect(640, 100, 111, 41));
        ammountBox->setFont(font1);
        ammountBox->setMinimum(10000);
        ammountBox->setMaximum(3000000);
        algoBox1 = new QComboBox(centralwidget);
        algoBox1->addItem(QString());
        algoBox1->addItem(QString());
        algoBox1->addItem(QString());
        algoBox1->addItem(QString());
        algoBox1->addItem(QString());
        algoBox1->setObjectName(QString::fromUtf8("algoBox1"));
        algoBox1->setGeometry(QRect(30, 230, 281, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        algoBox1->setFont(font2);
        algoBox2 = new QComboBox(centralwidget);
        algoBox2->addItem(QString());
        algoBox2->addItem(QString());
        algoBox2->addItem(QString());
        algoBox2->addItem(QString());
        algoBox2->addItem(QString());
        algoBox2->setObjectName(QString::fromUtf8("algoBox2"));
        algoBox2->setGeometry(QRect(480, 230, 291, 51));
        algoBox2->setFont(font2);
        algoBox2->setEditable(false);
        runButton = new QPushButton(centralwidget);
        runButton->setObjectName(QString::fromUtf8("runButton"));
        runButton->setEnabled(false);
        runButton->setGeometry(QRect(330, 230, 131, 51));
        runButton->setFont(font2);
        res1 = new QPushButton(centralwidget);
        res1->setObjectName(QString::fromUtf8("res1"));
        res1->setEnabled(false);
        res1->setGeometry(QRect(50, 310, 241, 41));
        res1->setFont(font1);
        res2 = new QPushButton(centralwidget);
        res2->setObjectName(QString::fromUtf8("res2"));
        res2->setEnabled(false);
        res2->setGeometry(QRect(510, 310, 241, 41));
        res2->setFont(font1);
        status_1 = new QLabel(centralwidget);
        status_1->setObjectName(QString::fromUtf8("status_1"));
        status_1->setGeometry(QRect(40, 370, 251, 31));
        status_1->setFont(font1);
        status_2 = new QLabel(centralwidget);
        status_2->setObjectName(QString::fromUtf8("status_2"));
        status_2->setGeometry(QRect(500, 370, 251, 31));
        status_2->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(610, 100, 21, 41));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 150, 61, 41));
        label_3->setFont(font);
        modBox = new QSpinBox(centralwidget);
        modBox->setObjectName(QString::fromUtf8("modBox"));
        modBox->setGeometry(QRect(640, 150, 111, 41));
        modBox->setFont(font1);
        modBox->setMinimum(1);
        modBox->setMaximum(20000);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        algoBox2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\200\321\226\320\262\320\275\321\217\320\275\320\275\321\217 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\226\320\262 \321\201\320\276\321\200\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        generateButton->setText(QApplication::translate("MainWindow", "Generate sequence", nullptr));
        showButton->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\275\321\203\321\202\320\270", nullptr));
        algoBox1->setItemText(0, QApplication::translate("MainWindow", "BubbleSort", nullptr));
        algoBox1->setItemText(1, QApplication::translate("MainWindow", "QuickSort", nullptr));
        algoBox1->setItemText(2, QApplication::translate("MainWindow", "SelectionSort", nullptr));
        algoBox1->setItemText(3, QApplication::translate("MainWindow", "MergeSort", nullptr));
        algoBox1->setItemText(4, QApplication::translate("MainWindow", "InsertionSort", nullptr));

        algoBox2->setItemText(0, QApplication::translate("MainWindow", "BubbleSort", nullptr));
        algoBox2->setItemText(1, QApplication::translate("MainWindow", "QuickSort", nullptr));
        algoBox2->setItemText(2, QApplication::translate("MainWindow", "SelectionSort", nullptr));
        algoBox2->setItemText(3, QApplication::translate("MainWindow", "MergeSort", nullptr));
        algoBox2->setItemText(4, QApplication::translate("MainWindow", "InsertionSort", nullptr));

        runButton->setText(QApplication::translate("MainWindow", "RUN", nullptr));
        res1->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\275\321\203\321\202\320\270 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        res2->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\275\321\203\321\202\320\270 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        status_1->setText(QString());
        status_2->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "n:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "mod:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
