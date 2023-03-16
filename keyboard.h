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
  Keyboard(QWidget *parent = nullptr);

signals:
  void clearBtnPressed();
  void enterBtnPressed();

  void keyQ();
  void keyW();
  void keyE();
  void keyR();
  void keyT();
  void keyY();
  void keyU();
  void keyI();
  void keyO();
  void keyP();
  void keyAA();

  void keyA();
  void keyS();
  void keyD();
  void keyF();
  void keyG();
  void keyH();
  void keyJ();
  void keyK();
  void keyL();
  void keyOE();
  void keyAE();

  void keyZ();
  void keyX();
  void keyC();
  void keyV();
  void keyB();
  void keyN();
  void keyM();

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
