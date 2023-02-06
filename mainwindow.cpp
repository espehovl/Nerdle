#include "mainwindow.h"

#include <QLabel>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    mainWidget(new MainWidget(parent))
{
    setWindowTitle(tr("Nerdle"));

    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{
}

