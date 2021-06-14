#include "dimitryeditor.h"
#include "ui_mainwindow.h"

editorwindow::editorwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dimitryeditor)
{
    ui->setupUi(this);
}

editorwindow::~editorwindow()
{
    delete ui;
}

