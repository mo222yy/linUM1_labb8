#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;

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

private:
    Ui::MainWindow *ui;
     QPushButton *exitButton;
};

#endif // MAINWINDOW_H
