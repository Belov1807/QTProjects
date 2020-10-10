#include "CoordinateSystemSourceData.h"

CoordinateSystemSourceData::CoordinateSystemSourceData(double _x, double _y) :
    m_x(_x),
    m_y(_y)
{

}

CoordinateSystemSourceData::~CoordinateSystemSourceData()
{

}


void CoordinateSystemSourceData::setX(const double _x)
{
    m_x = _x;
}

void CoordinateSystemSourceData::setY(const double _y)
{
    m_y = _y;
}

double CoordinateSystemSourceData::x() const
{
    return m_x;
}

double CoordinateSystemSourceData::y() const
{
    return m_y;
}
