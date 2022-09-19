#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class EntryField;

class MainWidget: public QWidget
{
    Q_OBJECT
public:
    MainWidget(QWidget *parent = 0);

private:
    EntryField *entryField;
};

#endif // MAINWIDGET_H
