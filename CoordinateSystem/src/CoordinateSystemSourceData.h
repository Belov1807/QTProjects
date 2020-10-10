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
     * \param _x - значение координаты x.
     * \param _y - значение координаты y.
     */
    CoordinateSystemSourceData(double _x = 0, double _y = 0);
    /*!
     * \brief Деструктор класса точки.
     */
    ~CoordinateSystemSourceData();

    /*!
     * \brief Задает координату x.
     * \param _x - значение координаты x.
     */
    void setX(const double _x);
    /*!
     * \brief Задает координату y.
     * \param _y - значение координаты y.
     */
    void setY(const double _y);

    /*!
     * \brief возвращает координату x.
     * \return координата x.
     */
    double x() const;
    /*!
     * \brief возвращает координату y.
     * \return координата y.
     */
    double y() const;

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
