#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QLabel>



class QPushButton;
class QLineEdit;
class Window : public QWidget
{
 Q_OBJECT
public:
 explicit Window(QWidget *parent = 0);
signals:
 void counterReached();
private slots:
 void happyButtonClicked(bool checked);
 void sadButtonClicked(bool checked);
 void tiredButtonClicked(bool checked);
 void lovingButtonClicked(bool checked);


private:
 int m_counter;
 QPushButton *happy_button;
 QPushButton *sad_button;
 QPushButton *smiley_button;
 QPushButton *tired_button;
 QPushButton *loving_button;


 QLabel *question;
 QLabel *result;
};

#endif // WINDOW_H
