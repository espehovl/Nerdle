#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include <QDebug>

class QGridLayout;
class QThread;

class EntryField;
class Keyboard;
class Nerdle;

class MainWidget: public QWidget
{
  Q_OBJECT
public:
  MainWidget(QWidget *parent = nullptr);
  ~MainWidget();

  QGridLayout *mainLayout;

private slots:
  void putLetter(QChar letter);
  void clearLine();

  void onKeyQ(){putLetter('Q');};
  void onKeyW(){putLetter('W');};
  void onKeyE(){putLetter('E');};
  void onKeyR(){putLetter('R');};
  void onKeyT(){putLetter('T');};
  void onKeyY(){putLetter('Y');};
  void onKeyU(){putLetter('U');};
  void onKeyI(){putLetter('I');};
  void onKeyO(){putLetter('O');};
  void onKeyP(){putLetter('P');};
  void onKeyAA(){putLetter(';');}; // Å == ;

  void onKeyA(){putLetter('A');};
  void onKeyS(){putLetter('S');};
  void onKeyD(){putLetter('D');};
  void onKeyF(){putLetter('F');};
  void onKeyG(){putLetter('G');};
  void onKeyH(){putLetter('H');};
  void onKeyJ(){putLetter('J');};
  void onKeyK(){putLetter('K');};
  void onKeyL(){putLetter('L');};
  void onKeyOE(){putLetter(':');}; // Ø == :
  void onKeyAE(){putLetter('*');}; // Æ == *

  void onKeyZ(){putLetter('Z');};
  void onKeyX(){putLetter('X');};
  void onKeyC(){putLetter('C');};
  void onKeyV(){putLetter('V');};
  void onKeyB(){putLetter('B');};
  void onKeyN(){putLetter('N');};
  void onKeyM(){putLetter('M');};


private:
  EntryField  *entryField;
  Keyboard    *keyboard;

  Nerdle      *nerdle;
  QThread     *workThread;



};

#endif // MAINWIDGET_H
