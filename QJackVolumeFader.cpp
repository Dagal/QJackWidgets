#include "QJackVolumeFader.h"

QJackVolumeFader::QJackVolumeFader(QWidget *parent) :
	QJackFader(parent)
{
	setValue(100);
}
