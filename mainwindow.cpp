#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSetting_triggered()
{
    Dialog *diag = new Dialog;
    diag->show();
}
void MainWindow::on_actionNewSetting_triggered(){
    Dialog* ndiag = new Dialog;
    ndiag->show();

}
