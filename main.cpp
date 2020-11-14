#include "mainwindow.h"
#include "shufflingrotatewidget.h"

#include <QApplication>
#include <QGLFramebufferObject>
#include <QtCore>
#include <QtGui>
#include <linux/fb.h>

#include "testmainwindow.h"
#include "rotatedemo.h"

void drawToScreen()
{

}

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //a.setAttribute(Qt::ApplicationAttribute::AA_DontShowShortcutsInContextMenus, true);

    RotateDemo w;
    w.show();
    //TestMainWIndow w;
    //w.activateWindow();
    //w.setAttribute(Qt::WidgetAttribute::WA_DontShowOnScreen);
    //w.setWindowFlags(Qt::Tool | Qt::WindowStaysOnBottomHint | Qt::FramelessWindowHint | \
                     Qt::X11BypassWindowManagerHint);
    //w.showFullScreen();

    return a.exec();
}
