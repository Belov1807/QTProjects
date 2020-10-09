#ifndef COORDINATESYSTEMSOURCEDATA_H
#define COORDINATESYSTEMSOURCEDATA_H

/*!
 * \brief Класс точки.
 */
class CoordinateSystemSourceData
{
public:
    /*!
     * \brief Конструктор класса точки.
     */
    CoordinateSystemSourceData(double _x, double _y);
    /*!
     * \brief Деструктор класса точки.
     */
    ~CoordinateSystemSourceData();

    /*!
     * \brief Задает координату X.
     */
    void setX(double _x);
    /*!
     * \brief Задает координату Y.
     */
    void setY(double _y);

    /*!
     * \brief возвращает координату X.
     * \return координата X.
     */
    double getX();
    /*!
     * \brief возвращает координату Y.
     * \return координата Y.
     */
    double getY();

private:
    /*!
     * \brief Координата X.
     */
    double m_x;
    /*!
     * \brief Координата Y.
     */
    double m_y;
};



#endif // COORDINATESYSTEMSOURCEDATA_H
