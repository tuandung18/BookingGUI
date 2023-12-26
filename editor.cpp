#include "editor.h"

Editor::Editor(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
}

Editor::~Editor()
{
    delete ui;
}
