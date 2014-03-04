#ifndef FINALSUDOKUQT_H
#define FINALSUDOKUQT_H

#include <QtGui/QMainWindow>
#include "ui_finalsudokuqt.h"

class finalsudokuqt : public QMainWindow
{
	Q_OBJECT

public:
	finalsudokuqt(QWidget *parent = 0, Qt::WFlags flags = 0);
	~finalsudokuqt();
	int sudo[9][9];
	void method1();
	void method2();
	void method3();
	void method4();
	void method5(); 
	void method6();
	void method7();
	void method8();

	public slots:
		void slove();
		void clear();

private:
	Ui::finalsudokuqtClass ui;
};

#endif // FINALSUDOKUQT_H
