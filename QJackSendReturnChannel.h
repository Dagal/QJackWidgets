#ifndef QJACKSENDRETURNCHANNEL_H
#define QJACKSENDRETURNCHANNEL_H

#include "QJackChannel.h"

class QJackSendReturnChannel : public QJackChannel
{
	Q_OBJECT

public:
	QJackSendReturnChannel(QWidget *parent = 0);
};

#endif
