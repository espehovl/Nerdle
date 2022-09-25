#ifndef KEY_H
#define KEY_H

#include <QWidget>
#include <QPushButton>

class Key : public QPushButton
{
    Q_OBJECT
public:
    Key(QString label = tr(""), QWidget *parent = nullptr);

    void setWrongLetter();
    void setCorrectLetter();
    void setPerfectLetter();

private:
    QString label;
};

#endif // KEY_H
