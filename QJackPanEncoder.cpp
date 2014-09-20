#include "QJackPanEncoder.h"

QJackPanEncoder::QJackPanEncoder(QWidget *parent) :
	QJackEncoder(parent)
{
	setValue(64);
}
