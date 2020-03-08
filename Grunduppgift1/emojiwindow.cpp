#include "emojiwindow.h"
#include <QPushButton>
#include <QApplication>

EmojiWindow::EmojiWindow(QWidget *parent) :
 QWidget(parent)
 {
    // Set size of the window
    setFixedSize(500, 250);

    // Create and position the button
    m_button = new QPushButton("window", this);
    m_button->setGeometry(140, 40, 80, 30);
    m_button->setFixedSize(80, 80);

    m_button1 = new QPushButton("emoji", this);
    m_button1->setGeometry(280, 40, 80, 30);
    m_button1->setFixedSize(80, 80);

    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
    connect(m_button1, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));

}
