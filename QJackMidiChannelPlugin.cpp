#include "QJackMidiChannel.h"
#include "QJackMidiChannelPlugin.h"

#include <QtPlugin>

QJackMidiChannelPlugin::QJackMidiChannelPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackMidiChannelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackMidiChannelPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackMidiChannelPlugin::createWidget(QWidget *parent)
{
	return new QJackMidiChannel(parent);
}

QString QJackMidiChannelPlugin::name() const
{
	return QLatin1String("QJackMidiChannel");
}

QString QJackMidiChannelPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackMidiChannelPlugin::icon() const
{
	return QIcon();
}

QString QJackMidiChannelPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackMidiChannelPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackMidiChannelPlugin::isContainer() const
{
	return true;
}

QString QJackMidiChannelPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackMidiChannel\" name=\"qJackMidiChannel\">\n</widget>\n");
}

QString QJackMidiChannelPlugin::includeFile() const
{
	return QLatin1String("QJackMidiChannel.h");
}

