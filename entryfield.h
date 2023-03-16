#ifndef ENTRYFIELD_H
#define ENTRYFIELD_H

#include <QWidget>
#include <QGridLayout>


class EntryLine;

class EntryField : public QGridLayout
{
  Q_OBJECT

public:
  EntryField(QWidget *parent = nullptr);
  ~EntryField();

  bool placeLetterGuess(QChar letter);
  int  detractGuess();

  void clearCurrentLine();

private:

  int guesses;
  int activeRow;
  int activeCol;


  EntryLine   *entryLines;

};

#endif // ENTRYFIELD_H
