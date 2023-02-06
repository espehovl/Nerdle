#include "keyboard.h"

#include "key.h"

#include <QGridLayout>
#include <QPushButton>

Keyboard::Keyboard(QWidget *parent):
  QGridLayout(parent),
  trn(11),
  mrn(11),
  brn(7),
  topRow(new Key[trn]),
  midRow(new Key[mrn]),
  botRow(new Key[brn]),
  enterBtn(new Key("Enter", parent)),
  clearBtn(new Key("Clear", parent))
{
  this->setSpacing(0);

  QString trKeys[] = {"Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", "Å"};
  for (int i = 0; i < trn; ++i){
    topRow[i].setParent(parent);
    topRow[i].setText(trKeys[i]);
    topRow[i].setEnabled(true);
    this->addWidget(&topRow[i], 0, i);
  }

  QString mrKeys[] = {"A", "S", "D", "F", "G", "H", "J", "K", "L", "Ø", "Æ"};
  for (int i = 0; i < mrn; ++i){
    midRow[i].setParent(parent);
    midRow[i].setText(mrKeys[i]);
    midRow[i].setEnabled(true);
    this->addWidget(&midRow[i], 1, i);
  }

  QString brKeys[] = {"Z", "X", "C", "V", "B", "N", "M"};
  for (int i = 0; i < brn; ++i){
    botRow[i].setParent(parent);
    botRow[i].setText(brKeys[i]);
    botRow[i].setEnabled(true);
    this->addWidget(&botRow[i], 2, i + 2);
  }

  clearBtn->setEnabled(true);
  this->addWidget(clearBtn, 2, 0, 1, 2);
  enterBtn->setEnabled(true);
  this->addWidget(enterBtn, 2, 9, 1, 2);


  topRow[0].setCorrectLetter();
  topRow[1].setPerfectLetter();
  topRow[2].setWrongLetter();


}
