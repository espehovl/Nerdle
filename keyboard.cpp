#include "keyboard.h"

#include "key.h"

#include <QGridLayout>
#include <QPushButton>

static const QString trKeys[] = {"Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", "Å"};
static const QString mrKeys[] = {"A", "S", "D", "F", "G", "H", "J", "K", "L", "Ø", "Æ"};
static const QString brKeys[] =           {"Z", "X", "C", "V", "B", "N", "M"};

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

  for (static int i = 0; i < trn; ++i){
    topRow[i].setParent(parent);
    topRow[i].setText(trKeys[i]);
    topRow[i].setObjectName(trKeys[i]);
    topRow[i].setEnabled(true);
    this->addWidget(&topRow[i], 0, i);
  }

  for (int i = 0; i < mrn; ++i){
    midRow[i].setParent(parent);
    midRow[i].setText(mrKeys[i]);
    midRow[i].setObjectName(trKeys[i]);
    midRow[i].setEnabled(true);
    this->addWidget(&midRow[i], 1, i);
  }

  for (int i = 0; i < brn; ++i){
    botRow[i].setParent(parent);
    botRow[i].setText(brKeys[i]);
    botRow[i].setObjectName(trKeys[i]);
    botRow[i].setEnabled(true);
    this->addWidget(&botRow[i], 2, i + 2);
  }

  clearBtn->setEnabled(true);
  this->addWidget(clearBtn, 2, 0, 1, 2);
  enterBtn->setEnabled(true);
  this->addWidget(enterBtn, 2, 9, 1, 2);

  // TODO: Remove
  topRow[0].setCorrectLetter();
  topRow[1].setPerfectLetter();
  topRow[2].setWrongLetter();

  connect(clearBtn,    SIGNAL(pressed()), this, SIGNAL(clearBtnPressed()));
  connect(enterBtn,    SIGNAL(pressed()), this, SIGNAL(enterBtnPressed()));

  connect(topRow +  0, SIGNAL(pressed()), this, SIGNAL(keyQ()));
  connect(topRow +  1, SIGNAL(pressed()), this, SIGNAL(keyW()));
  connect(topRow +  2, SIGNAL(pressed()), this, SIGNAL(keyE()));
  connect(topRow +  3, SIGNAL(pressed()), this, SIGNAL(keyR()));
  connect(topRow +  4, SIGNAL(pressed()), this, SIGNAL(keyT()));
  connect(topRow +  5, SIGNAL(pressed()), this, SIGNAL(keyY()));
  connect(topRow +  6, SIGNAL(pressed()), this, SIGNAL(keyU()));
  connect(topRow +  7, SIGNAL(pressed()), this, SIGNAL(keyI()));
  connect(topRow +  8, SIGNAL(pressed()), this, SIGNAL(keyO()));
  connect(topRow +  9, SIGNAL(pressed()), this, SIGNAL(keyP()));
  connect(topRow + 10, SIGNAL(pressed()), this, SIGNAL(keyAA()));

  connect(midRow +  0, SIGNAL(pressed()), this, SIGNAL(keyA()));
  connect(midRow +  1, SIGNAL(pressed()), this, SIGNAL(keyS()));
  connect(midRow +  2, SIGNAL(pressed()), this, SIGNAL(keyD()));
  connect(midRow +  3, SIGNAL(pressed()), this, SIGNAL(keyF()));
  connect(midRow +  4, SIGNAL(pressed()), this, SIGNAL(keyG()));
  connect(midRow +  5, SIGNAL(pressed()), this, SIGNAL(keyH()));
  connect(midRow +  6, SIGNAL(pressed()), this, SIGNAL(keyJ()));
  connect(midRow +  7, SIGNAL(pressed()), this, SIGNAL(keyK()));
  connect(midRow +  8, SIGNAL(pressed()), this, SIGNAL(keyL()));
  connect(midRow +  9, SIGNAL(pressed()), this, SIGNAL(keyOE()));
  connect(midRow + 10, SIGNAL(pressed()), this, SIGNAL(keyAE()));

  connect(botRow +  0, SIGNAL(pressed()), this, SIGNAL(keyZ()));
  connect(botRow +  1, SIGNAL(pressed()), this, SIGNAL(keyX()));
  connect(botRow +  2, SIGNAL(pressed()), this, SIGNAL(keyC()));
  connect(botRow +  3, SIGNAL(pressed()), this, SIGNAL(keyV()));
  connect(botRow +  4, SIGNAL(pressed()), this, SIGNAL(keyB()));
  connect(botRow +  5, SIGNAL(pressed()), this, SIGNAL(keyN()));
  connect(botRow +  6, SIGNAL(pressed()), this, SIGNAL(keyM()));
}
