#include <QApplication>
#include <QGLFramebufferObject>
#include <QtCore>
#include <QtGui>
#include <linux/fb.h>

#include "rotatedemo.h"
#include "animationdemo.h"

void drawToScreen()
{

}

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    /* 自转演示 demo */
    RotateDemo w;
    w.show();

    /* 动画框架演示demo */
    //AnimationDemo w;
    //w.show();

    return a.exec();
}
