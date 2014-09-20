#include "QJackInstrumentChannel.h"

QJackInstrumentChannel::QJackInstrumentChannel(QWidget *parent) :
	QJackChannel(parent)
{
	setName(tr("Instrument"));
}
