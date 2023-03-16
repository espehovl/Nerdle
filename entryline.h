#ifndef ENTRYLINE_H
#define ENTRYLINE_H

#include <QWidget>

#include <QGridLayout>

class EntryLetter;
class QGridLayout;

class EntryLine : public QGridLayout
{
  Q_OBJECT

public:
  EntryLine(QWidget *parent = nullptr);
  ~EntryLine();

  void placeLetter(int x, QChar letter);
  void clearLine();

private:
  const int numLetters;
  EntryLetter *entryLetters;
};

#endif // ENTRYLINE_H
