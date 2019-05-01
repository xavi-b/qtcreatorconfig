#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setAttribute(Qt::WA_QuitOnClose, true);
    setMinimumSize(300, 100);

    container = new QWidget(this);
    setCentralWidget(container);
}

MainWindow::~MainWindow()
{

}
