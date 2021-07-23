#include "resumedis.h"
#include "ui_resumedis.h"

resumeDis::resumeDis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resumeDis)
{
    ui->setupUi(this);
}

resumeDis::~resumeDis()
{
    delete ui;
}
