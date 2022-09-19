#include "entryline.h"

#include "entryletter.h"

#include <QGridLayout>
#include <QList>

EntryLine::EntryLine(QWidget *parent):
    QListWidget(parent),
    letters(5),
    layout(new QGridLayout(parent))
{
    layout->addWidget(new EntryLetter(this));
}

EntryLine::~EntryLine()
{
}
