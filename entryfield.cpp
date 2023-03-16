#include "entryfield.h"

#include "entryline.h"

#include <QGridLayout>
#include <QListWidgetItem>


EntryField::EntryField(QWidget *parent):
  QGridLayout(parent),
  guesses(6),
  activeRow(0),
  activeCol(0),
  entryLines(new EntryLine[guesses])
{
  for (int i = 0; i < guesses; ++i){
    this->addLayout(&entryLines[i], i, 0);
  }
}

EntryField::~EntryField()
{
}

bool EntryField::placeLetterGuess(QChar letter)
{
  EntryLine* activeEntryLine = entryLines + activeRow;

  if (activeCol <= 5 - 1){
    activeEntryLine->placeLetter(activeCol++, letter);

    return true;
  }
  else {
    return false;
  }

}

int EntryField::detractGuess()
{
  return --guesses;
}

void EntryField::clearCurrentLine()
{
  (entryLines + activeRow)->clearLine();

  activeCol = 0;
}
