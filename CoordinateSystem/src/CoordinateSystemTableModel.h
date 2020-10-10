#ifndef COORDINATESYSTEMTABLEMODEL_H
#define COORDINATESYSTEMTABLEMODEL_H

#include <QAbstractTableModel>
#include <QVariant>
#include <QList>

class QAbstractTableModel;
class CoordinateSystemSourceData;

/*!
 * \brief Класс табличной модели.
 */
class CoordinateSystemTableModel : public QAbstractTableModel
{
public:
    /*!
     * \brief Констуктор табличной модели.
     */
    CoordinateSystemTableModel();
     /*!
      * \brief Деструктор табличной модели.
      */
    ~CoordinateSystemTableModel();

    /*!
     * \brief Возвращает количество строк.
     * \param _parent - индекс модели.
     * \return Количеств строк.
     */
    int rowCount(const QModelIndex &_parent = QModelIndex()) const;
    /*!
     * \brief Возвращает количество столбцов.
     * \param _parent - индекс модели.
     * \return Количество столбцов.
     */
    int columnCount(const QModelIndex &_parent = QModelIndex()) const;

    /*!
     * \brief Возвращает значение элемента.
     * \param _index - индекс элемента.
     * \param _role - роль элемента.
     * \return Значение элемента.
     */  
    QVariant data(const QModelIndex &_index, int _role) const;
    /*!
     * \brief Сохранаяет новое значение элемента.
     * \param _index - индекс элемента.
     * \param _value - новое значение элемента.
     * \param _role - роль элемента.
     * \return
     */
    bool setData(const QModelIndex &_index, const QVariant &_value, int _role = Qt::EditRole);

    /*!
     * \brief Возвращает флаги элемента.
     * \param _index - индекс элемента.
     * \return Флаги элемента.
     */   
    Qt::ItemFlags flags(const QModelIndex &_index) const;

    /*!
     * \brief Псевдоним списка точек.
     */
    typedef QList<CoordinateSystemSourceData> td_list_point;

private:
    /*!
     * \brief Колонки модели.
     */
    enum TableColumn {
                        xColumn,        ///< Колонка координаты x.
                        yColumn,        ///< Колонка координаты y.

                        columnsCount    ///< Количество колонок.
    };

    /*!
     * \brief Список точек.
     */
    td_list_point m_listPoints;
};

#endif // COORDINATESYSTEMTABLEMODEL_H
