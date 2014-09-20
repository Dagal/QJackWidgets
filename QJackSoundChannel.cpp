#include "QJackSoundChannel.h"

QJackSoundChannel::QJackSoundChannel(QWidget *parent) :
	QJackChannel(parent)
{
	setName(tr("Sound"));
}
