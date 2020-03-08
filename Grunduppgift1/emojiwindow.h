#ifndef EMOJIWINDOW_H
#define EMOJIWINDOW_H

#include <QWidget>

class QPushButton;
class EmojiWindow : public QWidget
{
 public:
  explicit EmojiWindow(QWidget *parent = 0);
 private:
 QPushButton *m_button;
 QPushButton *m_button1;

};

#endif // EMOJIWINDOW_H
