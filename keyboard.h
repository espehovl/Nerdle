#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "key.h"
#include <QWidget>
#include <QGridLayout>

class Key;

class Keyboard : public QGridLayout
{
  Q_OBJECT
public:
  Keyboard(QWidget *parent = 0);

private:
  int trn;
  int mrn;
  int brn;

  Key *topRow;
  Key *midRow;
  Key *botRow;

  Key *enterBtn;
  Key *clearBtn;

};

#endif // KEYBOARD_H
