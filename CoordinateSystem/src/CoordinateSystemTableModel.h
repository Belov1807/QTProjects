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
     * \brief Задает новое значение элемента.
     * \param _index - индекс элемента.
     * \param _value - новое значение элемента.
     * \param _role - роль элемента.
     * \return true - новое значение задано.
     */
    bool setData(const QModelIndex &_index, const QVariant &_value, int _role = Qt::EditRole);

    /*!
     * \brief Возвращает флаги элемента.
     * \param _index - индекс элемента.
     * \return Флаги элемента.
     */   
    Qt::ItemFlags flags(const QModelIndex &_index) const;

    /*!
     * \brief Добавляет точку в модель.
     * \param _position - позиция точки.
     * \param _rows - количество точек дя добавления.
     * \param _parent - индекс модели.
     * \return true - точка добавлена в модель.
     */
    bool insertRows(int _position, int _rows = 1, const QModelIndex &_parent = QModelIndex());
    /*!
     * \brief Удаляет точку из модели.
     * \param _position - позиция точки.
     * \param _rows - количество точек для удаления.
     * \param _parent - индекс модели.
     * \return true - точка удалена из модели.
     */
    bool removeRows(int _position, int _rows = 1, const QModelIndex &_parent = QModelIndex());

    /*!
     * \brief Возвращает состояние модели.
     * \return true - модель пустая.
     */
    bool modelIsEmpty();

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
