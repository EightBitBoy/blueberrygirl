#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>

class MainWindow : public QMainWindow{
	public:
		MainWindow(QWidget *parent = nullptr);

	private:
		void addWidgets();
};

#endif // MAINWINDOW_H
