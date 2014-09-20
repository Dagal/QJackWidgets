#include "QJackInstrumentChannel.h"
#include "QJackInstrumentChannelPlugin.h"

#include <QtPlugin>

QJackInstrumentChannelPlugin::QJackInstrumentChannelPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackInstrumentChannelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackInstrumentChannelPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackInstrumentChannelPlugin::createWidget(QWidget *parent)
{
	return new QJackInstrumentChannel(parent);
}

QString QJackInstrumentChannelPlugin::name() const
{
	return QLatin1String("QJackInstrumentChannel");
}

QString QJackInstrumentChannelPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackInstrumentChannelPlugin::icon() const
{
	return QIcon();
}

QString QJackInstrumentChannelPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackInstrumentChannelPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackInstrumentChannelPlugin::isContainer() const
{
	return true;
}

QString QJackInstrumentChannelPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackInstrumentChannel\" name=\"qJackInstrumentChannel\">\n</widget>\n");
}

QString QJackInstrumentChannelPlugin::includeFile() const
{
	return QLatin1String("QJackInstrumentChannel.h");
}

