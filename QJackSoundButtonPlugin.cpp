#include "QJackSoundButton.h"
#include "QJackSoundButtonPlugin.h"

#include <QtPlugin>

QJackSoundButtonPlugin::QJackSoundButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackSoundButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackSoundButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackSoundButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackSoundButton(parent);
}

QString QJackSoundButtonPlugin::name() const
{
	return QLatin1String("QJackSoundButton");
}

QString QJackSoundButtonPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackSoundButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackSoundButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackSoundButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackSoundButtonPlugin::isContainer() const
{
	return false;
}

QString QJackSoundButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackSoundButton\" name=\"qJackSoundButton\">\n</widget>\n");
}

QString QJackSoundButtonPlugin::includeFile() const
{
	return QLatin1String("QJackSoundButton.h");
}

