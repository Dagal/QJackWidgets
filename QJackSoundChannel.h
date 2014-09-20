#ifndef QJACKSOUNDCHANNEL_H
#define QJACKSOUNDCHANNEL_H

#include <QWidget>

class QJackSoundChannel : public QWidget
{
	Q_OBJECT

public:
	QJackSoundChannel(QWidget *parent = 0);
};

#endif
