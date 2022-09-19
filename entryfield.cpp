#include "entryfield.h"

#include <QListWidget>
#include <QListWidgetItem>

EntryField::EntryField(QWidget *parent):
    entryList(new QListWidget(parent))
{

}

EntryField::~EntryField()
{
    delete entryList;
}
