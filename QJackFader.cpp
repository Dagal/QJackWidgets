#include "QJackFader.h"

QJackFader::QJackFader(QWidget *parent) :
	QSlider(parent)
{
	setMinimum(0);
	setMaximum(127);
	setMinimumHeight(127);
}
