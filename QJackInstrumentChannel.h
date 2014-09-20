#ifndef QJACKINSTRUMENTCHANNEL_H
#define QJACKINSTRUMENTCHANNEL_H

#include "QJackChannel.h"

class QJackInstrumentChannel : public QJackChannel
{
	Q_OBJECT

public:
	QJackInstrumentChannel(QWidget *parent = 0);
};

#endif
