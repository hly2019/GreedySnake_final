/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionExit;
    QAction *actionLoad;
    QAction *actionReset;
    QAction *actionPause;
    QAction *actionContinue;
    QAction *actionSave;
    QWidget *centralwidget;
    QPushButton *startgame;
    QPushButton *pause_game;
    QPushButton *Continue_game;
    QPushButton *Save_game;
    QPushButton *read_game;
    QPushButton *exit_game;
    QPushButton *Reset_game;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1341, 734);
        MainWindow->setFocusPolicy(Qt::ClickFocus);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionContinue = new QAction(MainWindow);
        actionContinue->setObjectName(QString::fromUtf8("actionContinue"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        startgame = new QPushButton(centralwidget);
        startgame->setObjectName(QString::fromUtf8("startgame"));
        startgame->setGeometry(QRect(1070, 530, 141, 41));
        startgame->setFocusPolicy(Qt::NoFocus);
        pause_game = new QPushButton(centralwidget);
        pause_game->setObjectName(QString::fromUtf8("pause_game"));
        pause_game->setGeometry(QRect(800, 570, 131, 41));
        pause_game->setFocusPolicy(Qt::NoFocus);
        Continue_game = new QPushButton(centralwidget);
        Continue_game->setObjectName(QString::fromUtf8("Continue_game"));
        Continue_game->setGeometry(QRect(930, 610, 141, 41));
        Continue_game->setFocusPolicy(Qt::NoFocus);
        Save_game = new QPushButton(centralwidget);
        Save_game->setObjectName(QString::fromUtf8("Save_game"));
        Save_game->setGeometry(QRect(1070, 570, 141, 41));
        Save_game->setFocusPolicy(Qt::NoFocus);
        read_game = new QPushButton(centralwidget);
        read_game->setObjectName(QString::fromUtf8("read_game"));
        read_game->setGeometry(QRect(800, 530, 131, 41));
        read_game->setFocusPolicy(Qt::NoFocus);
        exit_game = new QPushButton(centralwidget);
        exit_game->setObjectName(QString::fromUtf8("exit_game"));
        exit_game->setGeometry(QRect(930, 530, 141, 41));
        exit_game->setFocusPolicy(Qt::NoFocus);
        Reset_game = new QPushButton(centralwidget);
        Reset_game->setObjectName(QString::fromUtf8("Reset_game"));
        Reset_game->setGeometry(QRect(930, 570, 141, 41));
        Reset_game->setFocusPolicy(Qt::NoFocus);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1341, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionStart);
        menuMenu->addAction(actionLoad);
        menuMenu->addAction(actionExit);
        menuMenu->addAction(actionReset);
        menuMenu->addAction(actionPause);
        menuMenu->addAction(actionContinue);
        menuMenu->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        actionPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        actionContinue->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        startgame->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pause_game->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        Continue_game->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        Save_game->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        read_game->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        exit_game->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Reset_game->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
