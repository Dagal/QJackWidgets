#include "QJackSoundChannel.h"
#include "QJackSoundChannelPlugin.h"

#include <QtPlugin>

QJackSoundChannelPlugin::QJackSoundChannelPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackSoundChannelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackSoundChannelPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackSoundChannelPlugin::createWidget(QWidget *parent)
{
	return new QJackSoundChannel(parent);
}

QString QJackSoundChannelPlugin::name() const
{
	return QLatin1String("QJackSoundChannel");
}

QString QJackSoundChannelPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackSoundChannelPlugin::icon() const
{
	return QIcon();
}

QString QJackSoundChannelPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackSoundChannelPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackSoundChannelPlugin::isContainer() const
{
	return true;
}

QString QJackSoundChannelPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackSoundChannel\" name=\"qJackSoundChannel\">\n</widget>\n");
}

QString QJackSoundChannelPlugin::includeFile() const
{
	return QLatin1String("QJackSoundChannel.h");
}

