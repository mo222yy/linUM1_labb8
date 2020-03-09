#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class QLineEdit;
class QMessageBox;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_increaseButton_clicked();

    void on_decreaseButton_clicked();

    void on_lineEdit_editingFinished();

    void on_spinBox_3_valueChanged(int arg1);

    void checkValue(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QPushButton *exitButton;
    int *step;
    int getValue();
    QMessageBox *dialog;
};

#endif // MAINWINDOW_H
