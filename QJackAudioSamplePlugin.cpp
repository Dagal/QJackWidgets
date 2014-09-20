#include "QJackAudioSample.h"
#include "QJackAudioSamplePlugin.h"

#include <QtPlugin>

QJackAudioSamplePlugin::QJackAudioSamplePlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackAudioSamplePlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackAudioSamplePlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackAudioSamplePlugin::createWidget(QWidget *parent)
{
	return new QJackAudioSample(parent);
}

QString QJackAudioSamplePlugin::name() const
{
	return QLatin1String("QJackAudioSample");
}

QString QJackAudioSamplePlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackAudioSamplePlugin::icon() const
{
	return QIcon();
}

QString QJackAudioSamplePlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackAudioSamplePlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackAudioSamplePlugin::isContainer() const
{
	return false;
}

QString QJackAudioSamplePlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackAudioSample\" name=\"qJackAudioSample\">\n</widget>\n");
}

QString QJackAudioSamplePlugin::includeFile() const
{
	return QLatin1String("QJackAudioSample.h");
}

