#ifndef DEGISRAD_H
#define DEGISRAD_H

#include <QMainWindow>
#include <QMessageBox>
#include <math.h>

namespace Ui {
class Degisrad;
}

class Degisrad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Degisrad(QWidget *parent = 0);
    ~Degisrad();

private slots:
    // слот перевода в радианы из градусов
    void on_btn_do_clicked();
    // слот печати ошибки
    void s_printError(QString str);

signals:
    void releasedError(QString str);

private:
    Ui::Degisrad *ui;
};

#endif // DEGISRAD_H
