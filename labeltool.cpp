#include "labeltool.h"
#include "ui_labeltool.h"

LabelTool::LabelTool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LabelTool)
{
    ui->setupUi(this);
}

LabelTool::~LabelTool()
{
    delete ui;
}
