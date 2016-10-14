#ifndef SAMPLE_H
#define SAMPLE_H

#include <QtWidgets/QMainWindow>
#include "ui_sample.h"

class sample : public QMainWindow
{
	Q_OBJECT

public:
	sample(QWidget *parent = 0);
	~sample();

private:
	Ui::sampleClass ui;
};

#endif // SAMPLE_H
