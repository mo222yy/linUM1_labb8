#include "window.h"

#include <QPushButton>
#include <QApplication>
#include <QSlider>
#include <QProgressBar>
#include <QLabel>


Window::Window(QWidget *parent) :
 QWidget(parent)
{
 // Set size of the window
 setFixedSize(875, 350);

// Create string line
 question = new QLabel("What mood are you in?", this);
 question->setGeometry(350, 10, 80, 30);
 question->setFixedSize(400, 25);

 result = new QLabel("", this);
 result->setGeometry(300, 200, 80, 30);
 result->setFixedSize(400, 25);

// Create and position the button
 happy_button = new QPushButton("Happy", this);
 happy_button->setGeometry(100, 50, 80, 30);
 happy_button->setCheckable(true);
 happy_button->setFixedSize(150, 50);
 happy_button->setToolTip("Are you happy?");

 sad_button = new QPushButton("Sad", this);
 sad_button->setGeometry(275, 50, 80, 30);
 sad_button->setCheckable(true);
 sad_button->setFixedSize(150, 50);
 sad_button->setToolTip("Are you sad?");

 tired_button = new QPushButton("Tired", this);
 tired_button->setGeometry(450, 50, 80, 30);
 tired_button->setCheckable(true);
 tired_button->setFixedSize(150, 50);
 tired_button->setToolTip("Are you tired?");


 loving_button = new QPushButton("Loving", this);
 loving_button->setGeometry(625, 50, 80, 30);
 loving_button->setCheckable(true);
 loving_button->setFixedSize(150, 50);
 loving_button->setToolTip("do you feel loving?");


 smiley_button = new QPushButton(this);
 smiley_button->setGeometry(350, 120, 80, 30);
 smiley_button->setCheckable(true);
 smiley_button->setFixedSize(150, 50);



connect(happy_button, SIGNAL (clicked(bool)), this, SLOT (happyButtonClicked(bool)));
connect(sad_button, SIGNAL (clicked(bool)), this, SLOT (sadButtonClicked(bool)));
connect(tired_button, SIGNAL (clicked(bool)), this, SLOT (tiredButtonClicked(bool)));
connect(loving_button, SIGNAL (clicked(bool)), this, SLOT (lovingButtonClicked(bool)));

}

void Window::happyButtonClicked(bool checked)
{
 if (checked) {
     smiley_button->setIcon(QIcon::fromTheme("face-laugh"));
     sad_button->setChecked(false);
     tired_button->setChecked(false);
     loving_button->setChecked(false);
     result->setText("I'm happy to hear that, have good day!");
 } else {
     smiley_button->setIcon(QIcon());
     result->setText("");

 }
}

void Window::sadButtonClicked(bool checked)
{
 if (checked) {
     smiley_button->setIcon(QIcon::fromTheme("face-crying"));
     happy_button->setChecked(false);
     tired_button->setChecked(false);
     loving_button->setChecked(false);
     result->setText("That's sad to hear, things will get better!");
 } else {
     smiley_button->setIcon(QIcon());
     result->setText("");
 }
}

void Window::tiredButtonClicked(bool checked)
{
 if (checked) {
     smiley_button->setIcon(QIcon::fromTheme("face-tired"));
     happy_button->setChecked(false);
     sad_button->setChecked(false);
     loving_button->setChecked(false);
     result->setText("Hard work pays off, you deserve a nap!");
 } else {
     smiley_button->setIcon(QIcon());
     result->setText("");
 }
}

void Window::lovingButtonClicked(bool checked)
{
 if (checked) {
     smiley_button->setIcon(QIcon::fromTheme("face-kiss"));
     sad_button->setChecked(false);
     tired_button->setChecked(false);
     result->setText("Love is beautiful, spread your love!");
 } else {
     smiley_button->setIcon(QIcon());
     result->setText("");
 }
}

