#include "entryletter.h"

#include <QLabel>

EntryLetter::EntryLetter(QWidget *parent):
    content(new QLabel(parent))
{
    font.setFamily("Arial");

    content->setText(tr(""));
    content->setFont(font);
    content->setStyleSheet("QLabel { background-color : pale gray; color : black; }");

    show();
}
