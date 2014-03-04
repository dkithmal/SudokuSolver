#include "finalsudokuqt.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);

	finalsudokuqt w;
	w.show();
	return a.exec();
}
