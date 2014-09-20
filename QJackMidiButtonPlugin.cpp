#include "QJackMidiButton.h"
#include "QJackMidiButtonPlugin.h"

#include <QtPlugin>

QJackMidiButtonPlugin::QJackMidiButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackMidiButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackMidiButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackMidiButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackMidiButton(parent);
}

QString QJackMidiButtonPlugin::name() const
{
	return QLatin1String("QJackMidiButton");
}

QString QJackMidiButtonPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackMidiButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackMidiButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackMidiButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackMidiButtonPlugin::isContainer() const
{
	return false;
}

QString QJackMidiButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackMidiButton\" name=\"qJackMidiButton\">\n</widget>\n");
}

QString QJackMidiButtonPlugin::includeFile() const
{
	return QLatin1String("QJackMidiButton.h");
}

