#include "mainwindow.h"

#include <QLabel>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    mainWidget(new MainWidget(parent))
{
    setWindowTitle(tr("Nerdle"));

//    QGridLayout *mainLayout = new QGridLayout(parent);

  //  mainLayout->setAlignment(Qt::AlignHCenter);

    //mainLayout->addLayout(mainWidget, 1, 0, Qt::AlignHCenter);


    //setLayout(layout);
    setCentralWidget(mainWidget);

}

MainWindow::~MainWindow()
{
}

