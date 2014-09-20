#include "QJackAudioVuMeter.h"
#include "QJackAudioVuMeterPlugin.h"

#include <QtPlugin>

QJackAudioVuMeterPlugin::QJackAudioVuMeterPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackAudioVuMeterPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackAudioVuMeterPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackAudioVuMeterPlugin::createWidget(QWidget *parent)
{
	return new QJackAudioVuMeter(parent);
}

QString QJackAudioVuMeterPlugin::name() const
{
	return QLatin1String("QJackAudioVuMeter");
}

QString QJackAudioVuMeterPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackAudioVuMeterPlugin::icon() const
{
	return QIcon();
}

QString QJackAudioVuMeterPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackAudioVuMeterPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackAudioVuMeterPlugin::isContainer() const
{
	return false;
}

QString QJackAudioVuMeterPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackAudioVuMeter\" name=\"qJackAudioVuMeter\">\n</widget>\n");
}

QString QJackAudioVuMeterPlugin::includeFile() const
{
	return QLatin1String("QJackAudioVuMeter.h");
}

