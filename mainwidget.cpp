#include "mainwidget.h"

#include "entryfield.h"
#include "keyboard.h"
#include "nerdle.h"

#include <QGridLayout>
#include <QLabel>
#include <QFont>
#include <QThread>

#include <QDebug>

MainWidget::MainWidget(QWidget *parent):
  mainLayout(new QGridLayout(this)),
  entryField(new EntryField(parent)),
  keyboard(new Keyboard(parent))
{
  QLabel *titleLabel = new QLabel("NERDLE", parent);
  QFont  font;

  font.setFamily("Arial");
  font.setPointSize(50);

  titleLabel->setFont(font);
  titleLabel->show();

  QGridLayout *titleLayout = new QGridLayout(parent);
  titleLayout->addWidget(titleLabel);

  mainLayout->addLayout(titleLayout, 0, 0, Qt::AlignCenter);
  mainLayout->addLayout(entryField, 1, 0);
  mainLayout->addLayout(keyboard, 2, 0);


  workThread = new QThread(parent);
  nerdle     = new Nerdle(parent);

  nerdle->moveToThread(workThread);

  connect(workThread, SIGNAL(started()),       nerdle,     SLOT(runGame()));
  connect(nerdle,     SIGNAL(gameConcluded()), workThread, SLOT(quit()));
  connect(nerdle,     SIGNAL(gameConcluded()), workThread, SLOT(deleteLater()));
  connect(workThread, SIGNAL(finished()),      workThread, SLOT(deleteLater()));

  connect(keyboard,   SIGNAL(clearBtnPressed()), this, SLOT(clearLine()));

  connect(keyboard,   SIGNAL(keyQ()), this, SLOT(onKeyQ()));
  connect(keyboard,   SIGNAL(keyW()), this, SLOT(onKeyW()));
  connect(keyboard,   SIGNAL(keyE()), this, SLOT(onKeyE()));
  connect(keyboard,   SIGNAL(keyR()), this, SLOT(onKeyR()));
  connect(keyboard,   SIGNAL(keyT()), this, SLOT(onKeyT()));
  connect(keyboard,   SIGNAL(keyY()), this, SLOT(onKeyY()));
  connect(keyboard,   SIGNAL(keyU()), this, SLOT(onKeyU()));
  connect(keyboard,   SIGNAL(keyI()), this, SLOT(onKeyI()));
  connect(keyboard,   SIGNAL(keyO()), this, SLOT(onKeyO()));
  connect(keyboard,   SIGNAL(keyP()), this, SLOT(onKeyP()));
  connect(keyboard,   SIGNAL(keyAA()), this, SLOT(onKeyAA()));

  connect(keyboard,   SIGNAL(keyA()), this, SLOT(onKeyA()));
  connect(keyboard,   SIGNAL(keyS()), this, SLOT(onKeyS()));
  connect(keyboard,   SIGNAL(keyD()), this, SLOT(onKeyD()));
  connect(keyboard,   SIGNAL(keyF()), this, SLOT(onKeyF()));
  connect(keyboard,   SIGNAL(keyG()), this, SLOT(onKeyG()));
  connect(keyboard,   SIGNAL(keyH()), this, SLOT(onKeyH()));
  connect(keyboard,   SIGNAL(keyJ()), this, SLOT(onKeyJ()));
  connect(keyboard,   SIGNAL(keyK()), this, SLOT(onKeyK()));
  connect(keyboard,   SIGNAL(keyL()), this, SLOT(onKeyL()));
  connect(keyboard,   SIGNAL(keyOE()), this, SLOT(onKeyOE()));
  connect(keyboard,   SIGNAL(keyAE()), this, SLOT(onKeyAE()));

  connect(keyboard,   SIGNAL(keyZ()), this, SLOT(onKeyZ()));
  connect(keyboard,   SIGNAL(keyX()), this, SLOT(onKeyX()));
  connect(keyboard,   SIGNAL(keyC()), this, SLOT(onKeyC()));
  connect(keyboard,   SIGNAL(keyV()), this, SLOT(onKeyV()));
  connect(keyboard,   SIGNAL(keyB()), this, SLOT(onKeyB()));
  connect(keyboard,   SIGNAL(keyN()), this, SLOT(onKeyN()));
  connect(keyboard,   SIGNAL(keyM()), this, SLOT(onKeyM()));

  workThread->start();

}

MainWidget::~MainWidget()
{

}

void MainWidget::putLetter(QChar letter)
{
  qDebug() << letter;

  entryField->placeLetterGuess(letter);
}

void MainWidget::clearLine()
{
  entryField->clearCurrentLine();
}

