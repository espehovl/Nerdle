#ifndef ENTRYLINE_H
#define ENTRYLINE_H

#include <QWidget>

#include <QListWidget>

class EntryLetter;
class QGridLayout;

class EntryLine : public QListWidget
{
    Q_OBJECT
public:
    EntryLine(QWidget *parent = nullptr);
    ~EntryLine();

private:
    const int letters;
    QGridLayout *layout;
};

#endif // ENTRYLINE_H
