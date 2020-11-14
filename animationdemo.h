#ifndef ANIMATIONDEMO_H
#define ANIMATIONDEMO_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QPainter>
#include <QLabel>

class AnimationDemo : public QWidget
{
public:
    AnimationDemo(QWidget *parent = nullptr);

private:
    void initUI();
};

#endif // ANIMATIONDEMO_H
