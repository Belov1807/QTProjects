#include "CoordinateSystemMainwindow.h"
#include "ui_CoordinateSystemMainwindow.h"

#include "CoordinateSystemTableModel.h"

CoordinateSystemMainWindow::CoordinateSystemMainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::CoordinateSystemMainWindow)
{
    m_ui->setupUi(this);

    prepareUi();
    prepareConnections();
}
CoordinateSystemMainWindow::~CoordinateSystemMainWindow()
{
    delete m_ui;
}

void CoordinateSystemMainWindow::prepareUi()
{
    m_model = new CoordinateSystemTableModel();
    m_ui->tvCoordinates->setModel(m_model);

    if (m_model->modelIsEmpty() == true)
    {
        m_ui->pbRemovePoint->setEnabled(false);
    }
}

void CoordinateSystemMainWindow::prepareConnections()
{
    connect(m_ui->pbAddPoint, SIGNAL (clicked()), this, SLOT (addPoint()));
    connect(m_ui->pbRemovePoint, SIGNAL (clicked()), this, SLOT (removePoint()));
}

void CoordinateSystemMainWindow::addPoint()
{
    if (m_model->modelIsEmpty() == true)
    {
        m_model->insertRows(0);
        m_ui->pbRemovePoint->setEnabled(true);
    }
    if (!m_ui->tvCoordinates->currentIndex().isValid() &&
            m_model->modelIsEmpty() == false)
    {
        return;
    }
    m_model->insertRows(m_ui->tvCoordinates->currentIndex().row());
}

void CoordinateSystemMainWindow::removePoint()
{
    if (!m_ui->tvCoordinates->currentIndex().isValid())
    {
        return;
    }
    m_model->removeRows(m_ui->tvCoordinates->currentIndex().row());
}
