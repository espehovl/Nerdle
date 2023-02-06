#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>


class QGridLayout;
class QThread;

class EntryField;
class Keyboard;
class Nerdle;

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

  Nerdle      *nerdle;
  QThread     *workThread;
};

#endif // MAINWIDGET_H
