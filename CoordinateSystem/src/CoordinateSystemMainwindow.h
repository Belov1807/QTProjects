#ifndef COORDINATESYSTEMMAINWINDOW_H
#define COORDINATESYSTEMMAINWINDOW_H

#include <QMainWindow>

class CoordinateSystemTableModel;

QT_BEGIN_NAMESPACE
namespace Ui {
class CoordinateSystemMainWindow;
}
QT_END_NAMESPACE

/*!
 * \brief Класс главного окна приложения.
 */
class CoordinateSystemMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief Конструктор.
     * \param parent - родительский виджет.
     */
    CoordinateSystemMainWindow(QWidget *parent = nullptr);
    /*!
     * \brief Деструктор.
     */
    ~CoordinateSystemMainWindow();

private slots:
    /*!
     * \brief Добавляет в таблицу точку, ниже выбранной точки.
     */
    void addPoint();
    /*!
     * \brief Удаляет выбранную точку из таблицы.
     */
    void removePoint();

private:
    /*!
     * \brief Настравивает отображение.
     */
    void prepareUi();
    /*!
     * \brief Настравивает соеденения.
     */
    void prepareConnections();

    /*!
     * \brief Графический интерфейс.
     */
    Ui::CoordinateSystemMainWindow *m_ui;

    /*!
     * \brief Указатель на табличную модель.
     */
    CoordinateSystemTableModel *m_model;
};
#endif // COORDINATESYSTEMMAINWINDOW_H
