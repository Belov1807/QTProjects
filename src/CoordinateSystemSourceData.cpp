#include "CoordinateSystemSourceData.h"

CoordinateSystemSourceData::CoordinateSystemSourceData(double _x, double _y) : m_x(_x), m_y(_y)
{

}

void CoordinateSystemSourceData::setX(double _x)
{
    m_x = _x;
}

void CoordinateSystemSourceData::setY(double _y)
{
    m_y = _y;
}

double CoordinateSystemSourceData::getX()
{
    return m_x;
}

double CoordinateSystemSourceData::getY()
{
    return m_y;
}
