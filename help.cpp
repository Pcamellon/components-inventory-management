#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
    this->setWindowTitle("Ayuda");
}

help::~help()
{
    delete ui;
}
