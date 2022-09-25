#ifndef ENTRYLETTER_H
#define ENTRYLETTER_H

#include <QWidget>
#include <QLabel>
#include <QListWidgetItem>

#include <QColor>
#include <QFont>



class EntryLetter : public QLabel
{
Q_OBJECT

public:
    EntryLetter(QWidget *parent = nullptr);

    void setWrongLetter();
    void setCorrectLetter();
    void setPerfectLetter();

    const QString &getContent() const;
    void setContent(const QString &newContent);

private:
    QFont  font;
    QString content;
};

#endif // ENTRYLETTER_H
