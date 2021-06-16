#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ctime>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <QMessageBox>
#include <fstream>
#include <QDesktopServices>
#include <QUrl>
#include "sorting.h"
#include <QThread>
#include "testsort.h"
#include <ctime>
#include <ostream>
#include <thread>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_generateButton_clicked();

    void on_showButton_clicked();

    void on_res1_clicked();

    void on_res2_clicked();

    void on_runButton_clicked();

    void enableButtonRes1();
    void enableButtonRes2();
    void enableRunButton();
    void timeCount1();
    void timeCount2();

private:
    Ui::MainWindow *ui;

    Sorting first_array;
    Sorting second_array;
    TestSort first;
    TestSort second;
    QThread thread_1;
    QThread thread_2;
    int start;
    int count_for_enable = 0;
};
#endif // MAINWINDOW_H
