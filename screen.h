#ifndef SCREEN_H
#define SCREEN_H

#include <QWidget>
#include "server.h"

class QLabel;
class QPushButton;

class Screen : public QWidget
{
    Q_OBJECT

 public:
    Screen(QWidget *parent = 0);

 private:
    QLabel *statusLabel;
    QPushButton *quitButton;
    Server server;
};

#endif
