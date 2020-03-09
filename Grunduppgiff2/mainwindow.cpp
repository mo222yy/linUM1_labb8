#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog = new QMessageBox();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_increaseButton_clicked()
{
    int step = getValue();

    ui->spinBox->setValue(ui->spinBox->value() + step);
    ui->spinBox_2->setValue(ui->spinBox_2->value() + step);
    ui->spinBox_3->setValue(ui->spinBox_3->value() + step);
}


void MainWindow::on_decreaseButton_clicked()
{
    int step = getValue();

    ui->spinBox->setValue(ui->spinBox->value() - step);
    ui->spinBox_2->setValue(ui->spinBox_2->value() - step);
    ui->spinBox_3->setValue(ui->spinBox_3->value() - step);
}

void MainWindow::on_lineEdit_editingFinished()
{
    int step = getValue();

    ui->spinBox->setSingleStep(step);
    ui->spinBox_2->setSingleStep(step);
    ui->spinBox_3->setSingleStep(step);

}

int MainWindow::getValue(){
    QString SingleStep = ui->lineEdit->text();
    int step = SingleStep.toInt();
    if(step <= 0) {
        return 1;
    } else {
        return step;
    }
}

void MainWindow::checkValue(int arg1)
{
    if(arg1 == 255){
        dialog->setText("Max number reached 255");
        dialog->show();
    }
    if(arg1 == 0) {
        dialog->setText("Minimum number reached 0");
        dialog->show();
    }
}

void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    checkValue(arg1);
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    checkValue(arg1);
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    checkValue(arg1);

}
