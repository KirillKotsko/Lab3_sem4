/**
*	@file mainwindow.h
*	@author Kirill Kotsko
*	@version 1.1
*/
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
#include "unit_test_framework.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/*!
 * @brief The Main Window class, UI
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * @brief constructor
     * @param parent
     */
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_generateButton_clicked();

    void on_showButton_clicked();

    void on_res1_clicked();

    void on_res2_clicked();

    void on_runButton_clicked();

    /*!
     * @brief enable button
     */
    void enableButtonRes1();
    /*!
     * @brief enable button
     */
    void enableButtonRes2();
    /*!
     * @brief enable button
     */
    void enableRunButton();
    /*!
     * @brief time count (timer)
     */
    void timeCount1();
    /*!
     * @brief time count (timer)
     */
    void timeCount2();

private:
    /*!
     * @brief user interface
     */
    Ui::MainWindow *ui;

    /*!
     * @brief first array to sort (equal to second array)
     */
    Sorting first_array;
    /*!
     * @brief second array to sort (equal to first array)
     */
    Sorting second_array;

    /*!
     * @brief test sort to first stream
     */
    TestSort first;
    /*!
     * @brief test sort to second stream
     */
    TestSort second;

    /*!
     * @brief first stream
     */
    QThread thread_1;
    /*!
     * @brief second stream
     */
    QThread thread_2;

    /*!
     * @brief start for timer
     */
    int start;
    int count_for_enable = 0;
};
#endif // MAINWINDOW_H
