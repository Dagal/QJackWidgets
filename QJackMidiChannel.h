#ifndef QJACKMIDICHANNEL_H
#define QJACKMIDICHANNEL_H

#include "QJackChannel.h"

class QJackMidiChannel : public QJackChannel
{
	Q_OBJECT

public:
	QJackMidiChannel(QWidget *parent = 0);
};

#endif
