#ifndef COORDINATESYSTEMMAINWINDOW_H
#define COORDINATESYSTEMMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CoordinateSystemMainWindow; }
QT_END_NAMESPACE

class CoordinateSystemMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    CoordinateSystemMainWindow(QWidget *parent = nullptr);
    ~CoordinateSystemMainWindow();

private:
    Ui::CoordinateSystemMainWindow *ui;
};
#endif // COORDINATESYSTEMMAINWINDOW_H
