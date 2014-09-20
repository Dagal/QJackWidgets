#ifndef QJACKMONITORCHANNEL_H
#define QJACKMONITORCHANNEL_H

#include "QJackChannel.h"

class QJackMonitorChannel : public QJackChannel
{
	Q_OBJECT

public:
	QJackMonitorChannel(QWidget *parent = 0);
};

#endif
