#ifndef NOOBMAINWINDOW_H
#define NOOBMAINWINDOW_H
#include <Box2D/Box2D.h>
#include <stdio.h>
#include <QMainWindow>
#include <QTimer>

namespace Ui {
class noobMainWindow;
}

class noobMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit noobMainWindow(QWidget *parent = nullptr);
    ~noobMainWindow();
public slots:
    void startClicked();
signals:
private:
    Ui::noobMainWindow *ui;
};

#endif // NOOBMAINWINDOW_H
