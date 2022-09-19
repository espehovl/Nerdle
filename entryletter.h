#ifndef ENTRYLETTER_H
#define ENTRYLETTER_H

#include <QWidget>
#include <QListWidgetItem>

#include <QColor>
#include <QFont>

class QLabel;

class EntryLetter : public QWidget
{
Q_OBJECT

public:
    EntryLetter(QWidget *parent = nullptr);

    QFont  font;
    QLabel *content;


};

#endif // ENTRYLETTER_H
