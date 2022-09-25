#include "mainwidget.h"

#include "entryfield.h"
#include "keyboard.h"

#include <QGridLayout>
#include <QLabel>
#include <QFont>

MainWidget::MainWidget(QWidget *parent):
    layout(new QGridLayout(this)),
    entryField(new EntryField(this)),
    keyboard(new Keyboard(this))
{
    QLabel titleLabel;
    QFont  font;

    font.setFamily("Arial");
    font.setPointSize(30);

    titleLabel.setText("NERDLE");
    titleLabel.setFont(font);

    layout->addWidget(&titleLabel, 0, 0);
    layout->addLayout(entryField, 1, 0);
    layout->addLayout(keyboard, 2, 0);

}

MainWidget::~MainWidget()
{

}
