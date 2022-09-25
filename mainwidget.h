#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QGridLayout>

class EntryField;
class Keyboard;

class MainWidget: public QWidget
{
    Q_OBJECT
public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();

private:
    QGridLayout *layout;
    EntryField  *entryField;
    Keyboard    *keyboard;

};

#endif // MAINWIDGET_H
