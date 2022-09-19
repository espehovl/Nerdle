#include "mainwindow.h"

#include "entryfield.h"

#include <QLabel>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    mainWidget(new MainWidget(parent))
{
    setWindowTitle(tr("Nerdle"));

    QGridLayout *mainLayout = new QGridLayout(parent);

    QLabel mainLogo(this);
    mainLogo.setText("NERDLE");
    mainLogo.setFont(QFont("Arial"));

    mainLayout->setAlignment(Qt::AlignHCenter);
    mainLayout->addWidget(&mainLogo, 0, 0, Qt::AlignHCenter);

    mainLayout->addWidget(mainWidget, 1, 0, Qt::AlignHCenter);

    //setLayout(layout);
    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{
}

