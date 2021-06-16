#include "mainwindow.h"
#include "./ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&thread_1, &QThread::started, &first, &TestSort::run);
    connect(&thread_2, &QThread::started, &second, &TestSort::run);
    connect(&first, &TestSort::finished, &thread_1, &QThread::terminate);
    connect(&second, &TestSort::finished, &thread_2, &QThread::terminate);
    connect(&first, SIGNAL(enableButtonRes1()), this, SLOT(enableButtonRes1()));
    connect(&second, SIGNAL(enableButtonRes2()), this, SLOT(enableButtonRes2()));
    connect(&first, SIGNAL(enableRunButton()), this, SLOT(enableRunButton()));
    connect(&second, SIGNAL(enableRunButton()), this, SLOT(enableRunButton()));
    connect(&first, SIGNAL(timeCount1()), this, SLOT(timeCount1()));
    connect(&second, SIGNAL(timeCount2()), this, SLOT(timeCount2()));
    first.moveToThread(&thread_1);
    second.moveToThread(&thread_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_generateButton_clicked()
{
    ui->res1->setEnabled(false);
    ui->res2->setEnabled(false);
    first_array.clear();
    second_array.clear();
    ui->showButton->setEnabled(false);
    srand(time(0));
    int rand_num;
    vector<int> rand_massive;
    ofstream f("input.txt");
    int mod = ui->modBox->value();
    for(int i=1; i<=ui->ammountBox->value(); i++){
        rand_num = 1 + rand()% mod;
        rand_massive.push_back(rand_num);
        f<<rand_num<<" ";
    }
    first_array.insert(rand_massive);
    second_array.insert(rand_massive);
    f.close();
    ui->showButton->setEnabled(true);
    ui->runButton->setEnabled(true);
    QMessageBox msg;
    msg.setText("Generated!");
    msg.exec();
}

void MainWindow::on_showButton_clicked()
{
    QString file = "input.txt";
    QUrl url = QUrl::fromLocalFile(file);
    QDesktopServices::openUrl(url);
}

void MainWindow::on_res1_clicked()
{
    QString file = "output1.txt";
    QUrl url = QUrl::fromLocalFile(file);
    QDesktopServices::openUrl(url);
}

void MainWindow::on_res2_clicked()
{
    QString file = "output2.txt";
    QUrl url = QUrl::fromLocalFile(file);
    QDesktopServices::openUrl(url);
}

void MainWindow::on_runButton_clicked()
{
    ui->res1->setEnabled(false);
    ui->res2->setEnabled(false);
    ui->runButton->setEnabled(false);
    first.setData(first_array);
    second.setData(second_array);
    first.setVariant(1);
    second.setVariant(2);
    first.setIndex(ui->algoBox1->currentIndex());
    second.setIndex(ui->algoBox2->currentIndex());
    ui->status_1->setText("Loading...");
    ui->status_2->setText("Loading...");
    start = clock();
    thread_1.start();
    thread_2.start();
}

void MainWindow::enableButtonRes1()
{
    ui->res1->setEnabled(true);
}

void MainWindow::enableButtonRes2()
{
    ui->res2->setEnabled(true);
}

void MainWindow::enableRunButton()
{
    count_for_enable++;
    if(count_for_enable == 2) {
        ui->runButton->setEnabled(true);
        count_for_enable = 0;
    }
}

void MainWindow::timeCount1()
{
    auto a = (clock() - start)/1000.0;
    QString line = "Час: " + QString::number(a) + " секунд.";
    ui->status_1->setText(line);
}

void MainWindow::timeCount2()
{
    auto a = (clock() - start)/1000.0;
    QString line = "Час: " + QString::number(a) + " секунд.";
    ui->status_2->setText(line);
}
