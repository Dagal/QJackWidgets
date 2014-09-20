#include "QJackMidiLed.h"
#include "QJackMidiLedPlugin.h"

#include <QtPlugin>

QJackMidiLedPlugin::QJackMidiLedPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackMidiLedPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackMidiLedPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackMidiLedPlugin::createWidget(QWidget *parent)
{
	return new QJackMidiLed(parent);
}

QString QJackMidiLedPlugin::name() const
{
	return QLatin1String("QJackMidiLed");
}

QString QJackMidiLedPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackMidiLedPlugin::icon() const
{
	return QIcon();
}

QString QJackMidiLedPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackMidiLedPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackMidiLedPlugin::isContainer() const
{
	return false;
}

QString QJackMidiLedPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackMidiLed\" name=\"qJackMidiLed\">\n</widget>\n");
}

QString QJackMidiLedPlugin::includeFile() const
{
	return QLatin1String("QJackMidiLed.h");
}

