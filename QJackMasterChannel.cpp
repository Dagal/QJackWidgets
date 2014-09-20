#include "QJackMasterChannel.h"

QJackMasterChannel::QJackMasterChannel(QWidget *parent) :
	QJackChannel(parent)
{
	setName(tr("Master"));
}
