#ifndef QJACKMASTERCHANNEL_H
#define QJACKMASTERCHANNEL_H

#include "QJackChannel.h"

class QJackMasterChannel : public QJackChannel
{
	Q_OBJECT

public:
	QJackMasterChannel(QWidget *parent = 0);
};

#endif
