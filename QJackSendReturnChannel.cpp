#include "QJackSendReturnChannel.h"

QJackSendReturnChannel::QJackSendReturnChannel(QWidget *parent) :
	QJackChannel(parent)
{
	setName(tr("Send//Return"));
}
