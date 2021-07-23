/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOld;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionBold;
    QAction *actionUnderline;
    QAction *actionSubScript;
    QAction *actionSuperScript;
    QAction *actionResume;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuOpen;
    QMenu *menuEdit;
    QMenu *menuAbout_Me;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOld = new QAction(MainWindow);
        actionOld->setObjectName(QString::fromUtf8("actionOld"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        actionSubScript = new QAction(MainWindow);
        actionSubScript->setObjectName(QString::fromUtf8("actionSubScript"));
        actionSubScript->setCheckable(true);
        actionSuperScript = new QAction(MainWindow);
        actionSuperScript->setObjectName(QString::fromUtf8("actionSuperScript"));
        actionSuperScript->setCheckable(true);
        actionResume = new QAction(MainWindow);
        actionResume->setObjectName(QString::fromUtf8("actionResume"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuOpen = new QMenu(menubar);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout_Me = new QMenu(menubar);
        menuAbout_Me->setObjectName(QString::fromUtf8("menuAbout_Me"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOpen->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout_Me->menuAction());
        menuOpen->addAction(actionNew);
        menuOpen->addAction(actionOld);
        menuOpen->addAction(actionSave);
        menuOpen->addAction(actionSave_As);
        menuEdit->addAction(actionBold);
        menuEdit->addAction(actionUnderline);
        menuEdit->addAction(actionSubScript);
        menuEdit->addAction(actionSuperScript);
        menuAbout_Me->addAction(actionResume);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOld->setText(QApplication::translate("MainWindow", "Old", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionBold->setText(QApplication::translate("MainWindow", "Bold", nullptr));
        actionUnderline->setText(QApplication::translate("MainWindow", "Underline", nullptr));
        actionSubScript->setText(QApplication::translate("MainWindow", "SubScript", nullptr));
        actionSuperScript->setText(QApplication::translate("MainWindow", "SuperScript", nullptr));
        actionResume->setText(QApplication::translate("MainWindow", "Resume", nullptr));
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout_Me->setTitle(QApplication::translate("MainWindow", "About Me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
