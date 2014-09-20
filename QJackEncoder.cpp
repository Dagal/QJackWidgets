#include "QJackEncoder.h"

QJackEncoder::QJackEncoder(QWidget *parent) :
	QDial(parent)
{
	setMinimum(0);
	setMaximum(127);
}
