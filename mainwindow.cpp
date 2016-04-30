#include "mainwindow.h"
#include "game.h"
#include "ui_mainwindow.h"
#include "ui_game.h"

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

void MainWindow::on_pushButton_clicked()
{
    game= new Game();
    hide();
    game->show();

}
