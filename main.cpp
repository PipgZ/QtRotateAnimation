#include <QApplication>
#include <QGLFramebufferObject>
#include <QtCore>
#include <QtGui>
#include <linux/fb.h>

#include "rotatedemo.h"

void drawToScreen()
{

}

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    RotateDemo w;
    w.show();

    return a.exec();
}
