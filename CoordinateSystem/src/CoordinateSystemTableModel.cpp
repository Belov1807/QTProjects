#include "CoordinateSystemTableModel.h"

#include "CoordinateSystemSourceData.h"

CoordinateSystemTableModel::CoordinateSystemTableModel()
{
    m_listPoints.clear();
    m_listPoints.append(CoordinateSystemSourceData());
}

CoordinateSystemTableModel::~CoordinateSystemTableModel()
{

}

int CoordinateSystemTableModel::rowCount(const QModelIndex &_parent) const
{
    m_listPoints.count();
}

int CoordinateSystemTableModel::columnCount(const QModelIndex &_parent) const
{
    return columnsCount;
}

QVariant CoordinateSystemTableModel::data(const QModelIndex &_index, int _role) const
{
    if (!_index.isValid())
    {
        return QVariant();
    }

    if (_role == Qt::DisplayRole)
    {
        if (_index.column() == xColumn)
        {
            return m_listPoints.at(_index.row()).x();
        }
        if (_index.column() == yColumn)
        {
            return m_listPoints.at(_index.row()).y();
        }
    }

    return QVariant();
}

bool CoordinateSystemTableModel::setData(const QModelIndex &_index, const QVariant &_value, int _role)
{
    if (_role == Qt::EditRole)
    {
        if (_index.column() == xColumn)
        {
            m_listPoints[_index.row()].setX(_value.toDouble());
        }
        if (_index.column() == yColumn)
        {
            m_listPoints[_index.row()].setY(_value.toDouble());
        }
    }
}

Qt::ItemFlags CoordinateSystemTableModel::flags(const QModelIndex &_index) const
{
    if (!_index.isValid())
    {
        return Qt::NoItemFlags;
    }
    return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
}

