#include "entryletter.h"

#include <QLabel>

EntryLetter::EntryLetter(QWidget *parent):
    QLabel(parent),
    content(tr("W"))
{
    font.setFamily("Arial");
    font.setPointSize(38);


    this->setStyleSheet("QLabel { background-color : white; color : black; }");
    this->setAlignment(Qt::AlignCenter);
    this->setFont(font);
    this->setText(content);

    this->setFixedSize(44, 44);
}

void EntryLetter::setWrongLetter()
{
    this->setStyleSheet("QLabel { background-color : grey; color : black; }");
}

void EntryLetter::setCorrectLetter()
{
    this->setStyleSheet("QLabel { background-color : yellow; color : black; }");
}

void EntryLetter::setPerfectLetter()
{
    this->setStyleSheet("QLabel { background-color : green; color : white; }");
}

const QString &EntryLetter::getContent() const
{
    return content;
}

void EntryLetter::setContent(const QString &newContent)
{
    content = newContent;
}
