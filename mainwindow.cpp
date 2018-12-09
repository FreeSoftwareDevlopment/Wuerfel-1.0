#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    exit(0);
}

void MainWindow::on_pushButton_clicked()
{
    int zufalle;
    zufalle = rand() % 6+1;
    QString zufall = QString("%1").arg(zufalle);
    ui->lineEdit->setText(zufall);

}

void MainWindow::on_lineEdit_inputRejected()
{
    int free;
    free = 0;
}
