#ifndef ENTRYFIELD_H
#define ENTRYFIELD_H

#include <QWidget>


class QListWidget;

class EntryField : public QWidget
{
    Q_OBJECT
public:
    EntryField(QWidget *parent = nullptr);
    ~EntryField();

private:
    QListWidget *entryList;

};

#endif // ENTRYFIELD_H
