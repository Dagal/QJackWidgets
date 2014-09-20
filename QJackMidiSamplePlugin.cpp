#include "QJackMidiSample.h"
#include "QJackMidiSamplePlugin.h"

#include <QtPlugin>

QJackMidiSamplePlugin::QJackMidiSamplePlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackMidiSamplePlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackMidiSamplePlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackMidiSamplePlugin::createWidget(QWidget *parent)
{
	return new QJackMidiSample(parent);
}

QString QJackMidiSamplePlugin::name() const
{
	return QLatin1String("QJackMidiSample");
}

QString QJackMidiSamplePlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackMidiSamplePlugin::icon() const
{
	return QIcon();
}

QString QJackMidiSamplePlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackMidiSamplePlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackMidiSamplePlugin::isContainer() const
{
	return false;
}

QString QJackMidiSamplePlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackMidiSample\" name=\"qJackMidiSample\">\n</widget>\n");
}

QString QJackMidiSamplePlugin::includeFile() const
{
	return QLatin1String("QJackMidiSample.h");
}

