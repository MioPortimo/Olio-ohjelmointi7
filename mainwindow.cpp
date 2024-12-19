#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCount_clicked()
{
    counter++;
    ui->labelInfo->setText( QString::number(counter));
    ui->txtResult->setText( QString::number(counter));

}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    ui->labelInfo->setText( QString::number(counter));
    ui->txtResult->setText( QString::number(counter));

}

