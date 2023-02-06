#include "mainwidget.h"

#include "entryfield.h"
#include "keyboard.h"
#include "nerdle.h"

#include <QGridLayout>
#include <QLabel>
#include <QFont>
#include <QThread>

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

  connect(workThread, SIGNAL(started()),       nerdle,     SLOT(run()));
  connect(nerdle,     SIGNAL(gameConcluded()), workThread, SLOT(quit()));
  connect(nerdle,     SIGNAL(gameConcluded()), workThread, SLOT(deleteLater()));
  connect(workThread, SIGNAL(finished()),      workThread, SLOT(deleteLater()));

}

MainWidget::~MainWidget()
{

}
