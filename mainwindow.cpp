#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->label->setText("Hello Everyone"); 
	ui->label->append("I am ARIJIT PAL.I'm pursuing B.Tech CSE");
}