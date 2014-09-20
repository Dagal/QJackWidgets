#include "QJackMonitorChannel.h"
#include "QJackMonitorChannelPlugin.h"

#include <QtPlugin>

QJackMonitorChannelPlugin::QJackMonitorChannelPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackMonitorChannelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackMonitorChannelPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackMonitorChannelPlugin::createWidget(QWidget *parent)
{
	return new QJackMonitorChannel(parent);
}

QString QJackMonitorChannelPlugin::name() const
{
	return QLatin1String("QJackMonitorChannel");
}

QString QJackMonitorChannelPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackMonitorChannelPlugin::icon() const
{
	return QIcon();
}

QString QJackMonitorChannelPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackMonitorChannelPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackMonitorChannelPlugin::isContainer() const
{
	return false;
}

QString QJackMonitorChannelPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackMonitorChannel\" name=\"qJackMonitorChannel\">\n</widget>\n");
}

QString QJackMonitorChannelPlugin::includeFile() const
{
	return QLatin1String("QJackMonitorChannel.h");
}

