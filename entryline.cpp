#include "entryline.h"

#include "entryletter.h"

#include <QGridLayout>
#include <QList>

EntryLine::EntryLine(QWidget *parent):
  QGridLayout(parent),
  numLetters(5),
  entryLetters(new EntryLetter[numLetters])
{

  for (int i = 0; i < numLetters; ++i){
    this->addWidget(&entryLetters[i], 0, i, 1, 1);
  }

  //    entryLetters[0].setCorrectLetter();
  //    entryLetters[1].setPerfectLetter();
  //    entryLetters[2].setWrongLetter();

}

EntryLine::~EntryLine()
{
}
