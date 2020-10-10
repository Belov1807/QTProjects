#include "CoordinateSystemMainwindow.h"
#include "ui_CoordinateSystemMainwindow.h"

#include "CoordinateSystemTableModel.h"

CoordinateSystemMainWindow::CoordinateSystemMainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::CoordinateSystemMainWindow)
{
    m_ui->setupUi(this);

    m_model = new CoordinateSystemTableModel();
    m_ui->tvCoordinates->setModel(m_model);
}

CoordinateSystemMainWindow::~CoordinateSystemMainWindow()
{
    delete m_ui;
}

