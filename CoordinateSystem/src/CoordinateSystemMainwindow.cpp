#include "CoordinateSystemMainwindow.h"
#include "ui_CoordinateSystemMainwindow.h"

CoordinateSystemMainWindow::CoordinateSystemMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CoordinateSystemMainWindow)
{
    ui->setupUi(this);
}

CoordinateSystemMainWindow::~CoordinateSystemMainWindow()
{
    delete ui;
}

