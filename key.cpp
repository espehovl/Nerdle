#include "key.h"

Key::Key(QString label, QWidget *parent):
    QPushButton(parent),
    label(label)
{
    this->setText(label);
    //this->setAutoFillBackground(true);
    QString defaultStyle =
    "QPushButton {"
    "   background-color: white;"
    "   color: black;"
    "   border-radius: 5px;"
    "   border-width: 2px;"
    "   border-color: black;"
    "   min-width: 24px;"
    "   min-height: 30px;"
    "   margin: 2px;"
    "}"
    ""
    "QPushButton:pressed {"
    "   background-color:pale gray;"
    "}";
    this->setStyleSheet(defaultStyle);
}

void Key::setWrongLetter()
{
    this->setStyleSheet(
        "QPushButton {"
        "   background-color: gray;"
        "   color: black;"
        "   border-radius: 5px;"
        "   border-width: 2px;"
        "   border-color: black;"
        "   min-width: 24px;"
        "   min-height: 30px;"
        "   margin: 2px;"
        "}"
        ""
        "QPushButton:pressed {"
        "   background-color:pale gray;"
        "}");
}

void Key::setCorrectLetter()
{
    this->setStyleSheet(
        "QPushButton {"
        "   background-color: yellow;"
        "   color: black;"
        "   border-radius: 5px;"
        "   border-width: 2px;"
        "   border-color: black;"
        "   min-width: 24px;"
        "   min-height: 30px;"
        "   margin: 2px;"
        "}"
        ""
        "QPushButton:pressed {"
        "   background-color:pale gray;"
        "}");
}

void Key::setPerfectLetter()
{
    this->setStyleSheet(
        "QPushButton {"
        "   background-color: green;"
        "   color: black;"
        "   border-radius: 5px;"
        "   border-width: 2px;"
        "   border-color: black;"
        "   min-width: 24px;"
        "   min-height: 30px;"
        "   margin: 2px;"
        "}"
        ""
        "QPushButton:pressed {"
        "   background-color:pale gray;"
        "}");
}
