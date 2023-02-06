#include "entryfield.h"

#include "entryline.h"

#include <QGridLayout>
#include <QListWidgetItem>


EntryField::EntryField(QWidget *parent):
    QGridLayout(parent),
    guesses(6),
    entryLines(new EntryLine[guesses])
{
    for (int i = 0; i < guesses; ++i){
        this->addLayout(&entryLines[i], i, 0);
    }
}

EntryField::~EntryField()
{
}
