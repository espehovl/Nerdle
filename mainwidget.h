#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>


class EntryField;
class Keyboard;
class QGridLayout;

class MainWidget: public QWidget
{
    Q_OBJECT
public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();

    QGridLayout *mainLayout;
private:
    EntryField  *entryField;
    Keyboard    *keyboard;

};

#endif // MAINWIDGET_H
