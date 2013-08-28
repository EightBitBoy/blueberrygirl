#include <QApplication>
#include <QTextStream>
#include <QWidget>

#include "mainwindow.h"

int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	QWidget window;

	window.resize(250, 150);
	window.setWindowTitle("Simple example");
	window.show();


	QTextStream out(stdout);
	QString foo = "foobar";

	out << foo << endl;

    return app.exec();
}
