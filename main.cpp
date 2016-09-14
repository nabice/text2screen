#include <QApplication>
#include <QtCore>

#include <stdlib.h>

#include "screen.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Screen screen;
    screen.setAttribute(Qt::WA_TranslucentBackground);
    screen.setWindowFlags(Qt::X11BypassWindowManagerHint | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    screen.showFullScreen();
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    return app.exec();
}
