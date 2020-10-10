#ifndef COORDINATESYSTEMMAINWINDOW_H
#define COORDINATESYSTEMMAINWINDOW_H

#include <QMainWindow>

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

private:
    /*!
     * \brief Графический интерфейс.
     */
    Ui::CoordinateSystemMainWindow *m_ui;
};
#endif // COORDINATESYSTEMMAINWINDOW_H
