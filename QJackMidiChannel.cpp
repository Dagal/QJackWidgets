#include "QJackMidiChannel.h"

QJackMidiChannel::QJackMidiChannel(QWidget *parent) :
	QJackChannel(parent)
{
	setName(tr("Midi1"));
}
