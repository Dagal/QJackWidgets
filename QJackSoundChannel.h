#ifndef QJACKSOUNDCHANNEL_H
#define QJACKSOUNDCHANNEL_H

#include "QJackChannel.h"

class QJackSoundChannel : public QJackChannel
{
	Q_OBJECT

public:
	QJackSoundChannel(QWidget *parent = 0);
};

#endif
