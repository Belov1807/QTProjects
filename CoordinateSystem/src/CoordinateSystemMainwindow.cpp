#include "CoordinateSystemMainwindow.h"
#include "ui_CoordinateSystemMainwindow.h"

CoordinateSystemMainWindow::CoordinateSystemMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_ui(new Ui::CoordinateSystemMainWindow)
{
    m_ui->setupUi(this);
}

CoordinateSystemMainWindow::~CoordinateSystemMainWindow()
{
    delete m_ui;
}

