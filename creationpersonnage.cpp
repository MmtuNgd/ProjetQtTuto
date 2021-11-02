#include "creationpersonnage.h"
#include "ui_creationpersonnage.h"

CreationPersonnage::CreationPersonnage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreationPersonnage)
{
    ui->setupUi(this);
}

CreationPersonnage::~CreationPersonnage()
{
    delete ui;
}
