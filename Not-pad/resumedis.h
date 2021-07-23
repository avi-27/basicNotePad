#ifndef RESUMEDIS_H
#define RESUMEDIS_H

#include <QDialog>

namespace Ui {
class resumeDis;
}

class resumeDis : public QDialog
{
    Q_OBJECT

public:
    explicit resumeDis(QWidget *parent = nullptr);
    ~resumeDis();

private:
    Ui::resumeDis *ui;
};

#endif // RESUMEDIS_H
