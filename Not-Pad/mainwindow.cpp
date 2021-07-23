#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "resumedis.h"
#include "ui_resumedis.h"

#include<QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionBold_triggered(bool checked)
{
    if(checked){
             ui->textEdit->setFontWeight(QFont::Bold);    }
        else{
             ui->textEdit->setFontWeight(QFont::Normal);
        }
}

void MainWindow::on_actionUnderline_triggered(bool checked)
{
    if(checked){
        ui->textEdit->setFontUnderline(1);
    }
    else{
        ui->textEdit->setFontUnderline(0);
    }
}

void MainWindow::on_actionSubScript_triggered(bool checked)
{
    if(checked){
        QTextCharFormat format;
           format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
        ui->textEdit->mergeCurrentCharFormat(format);
    }
    else{
        QTextCharFormat format;
           format.setVerticalAlignment(QTextCharFormat::AlignNormal);
        ui->textEdit->mergeCurrentCharFormat(format);
    }
}

void MainWindow::on_actionSuperScript_triggered(bool checked)
{
    if(checked){
        QTextCharFormat format;
           format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
        ui->textEdit->mergeCurrentCharFormat(format);
    }
    else{
        QTextCharFormat format;
           format.setVerticalAlignment(QTextCharFormat::AlignNormal);
        ui->textEdit->mergeCurrentCharFormat(format);
    }
}

void MainWindow::on_actionNew_triggered()
{
    thisfile = "";
    ui->textEdit->setPlainText("");
}

void MainWindow::on_actionOld_triggered()
{
    QString file=QFileDialog::getOpenFileName(this,"File Open");
      if(!file.isEmpty()){
      QFile s(file);
      if(s.open(QFile::ReadOnly| QFile::Text)){
          thisfile=file;
          //QTextStream in(&s);
          //QString text= in.readAll();
          s.close();

          //ui->textEdit->setPlainText(text);
      }
      }
}


void MainWindow::on_actionSave_triggered()
{
    QFile s(thisfile);
    if(s.open(QFile::WriteOnly|QFile::Text)){
     //   QTextStream out(&s);
//        out<<ui->textEdit->toPlainText();
        s.close();

    }
}


void MainWindow::on_actionSave_As_triggered()
{
    QString file=QFileDialog::getSaveFileName(this,"File Open");
        if(!file.isEmpty()){
            thisfile=file;
            on_actionSave_triggered();
        }
}

void MainWindow::on_actionResume_triggered()
{
    res=new resumeDis(this);
    res->show();
}
