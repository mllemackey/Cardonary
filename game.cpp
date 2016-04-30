#include "game.h"
#include "ui_game.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"

Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
}

Game::~Game()
{
    delete ui;
}
