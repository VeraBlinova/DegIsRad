#include "degisrad.h"
#include "ui_degisrad.h"

Degisrad::Degisrad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Degisrad)
{
    ui->setupUi(this);

    connect(this, SIGNAL(releasedError(QString)), this, SLOT(s_printError(QString)));
}
void Degisrad::s_printError(QString str)
{
    QMessageBox::critical(this, "Warning", str);
}

void Degisrad::on_btn_do_clicked()
{
    bool ok;

    // получаем градусную меру из line_deg, line_min и line_sec
    double dDeg = ui->line_deg->text().toDouble(&ok);
    if (!ok) {
        emit releasedError("It did not enter a number");
        return;
    };// error of trunslation
    if (dDeg > 360) {
        emit releasedError("Too much degracy ");
        return;
    };// error

    double dMin = ui->line_min->text().toDouble(&ok);
    if (!ok) {
        emit releasedError("It did not enter a number");
        return;
    };// error of trunslation
    if (dMin > 60) {
        emit releasedError("Too much minutes");
        return;
    }; // error

    double dSec = ui->line_sec->text().toDouble(&ok);
    if (!ok) {
        emit releasedError("It did not enter a number");
        return;
    };// error of trunslation
    if (dSec > 60) {
        emit releasedError("Too much seconds");
        return;
    };// error


    if (dDeg + dMin + dSec > 360) {
        emit releasedError("Too much degracy");
        return;
    };// error
    double dRad = (dDeg + dMin / 60 + dSec / 3600) / 180 * M_PI;
    // выводим радианы  в line_rad
    ui->line_rad->setText(QString::number(dRad));
}

Degisrad::~Degisrad()
{
    delete ui;
}


