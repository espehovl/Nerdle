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

private:

  int guesses;

  EntryLine   *entryLines;

};

#endif // ENTRYFIELD_H
