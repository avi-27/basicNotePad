#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "resumedis.h"
#include "ui_resumedis.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionBold_triggered(bool checked);

    void on_actionUnderline_triggered(bool checked);

    void on_actionSubScript_triggered(bool checked);

    void on_actionSuperScript_triggered(bool checked);

    void on_actionNew_triggered();

    void on_actionOld_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionResume_triggered();

private:
    Ui::MainWindow *ui;
    QString thisfile;
    resumeDis *res;
};
#endif // MAINWINDOW_H
