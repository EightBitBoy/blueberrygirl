#include <QGridLayout>
#include <QPushButton>

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	:QMainWindow(parent){
	this->setWindowTitle("Blueberrygirl");
	this->resize(500, 500);
	this->addWidgets();
	this->show();
}

void MainWindow::addWidgets(){
	QWidget *widget = new QWidget(nullptr);

	QGridLayout *grid = new QGridLayout(this);

	QPushButton *button1 = new QPushButton("One");
	QPushButton *button2 = new QPushButton("Two");
	QPushButton *button3 = new QPushButton("Three");

	grid->addWidget(button1, 0, 0);
	grid->addWidget(button2, 1, 0);
	grid->addWidget(button3, 2, 0);

	widget->setLayout(grid);
	this->setCentralWidget(widget);
}
