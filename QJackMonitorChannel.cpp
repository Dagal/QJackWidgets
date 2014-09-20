#include "QJackMonitorChannel.h"

QJackMonitorChannel::QJackMonitorChannel(QWidget *parent) :
	QJackChannel(parent)
{
	setName(tr("Monitor"));
}
