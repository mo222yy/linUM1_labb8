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

void MainWindow::on_increaseButton_clicked()
{
    ui->spinBox->setValue(ui->spinBox->value() + 1);
    ui->spinBox_2->setValue(ui->spinBox_2->value() + 1);
    ui->spinBox_3->setValue(ui->spinBox_3->value() + 1);
}


void MainWindow::on_decreaseButton_clicked()
{
    ui->spinBox->setValue(ui->spinBox->value() - 1);
    ui->spinBox_2->setValue(ui->spinBox_2->value() - 1);
    ui->spinBox_3->setValue(ui->spinBox_3->value() - 1);
}
