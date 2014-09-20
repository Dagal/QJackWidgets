#include "QJackAudioBarGraph.h"
#include "QJackAudioBarGraphPlugin.h"

#include <QtPlugin>

QJackAudioBarGraphPlugin::QJackAudioBarGraphPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackAudioBarGraphPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackAudioBarGraphPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackAudioBarGraphPlugin::createWidget(QWidget *parent)
{
	return new QJackAudioBarGraph(parent);
}

QString QJackAudioBarGraphPlugin::name() const
{
	return QLatin1String("QJackAudioBarGraph");
}

QString QJackAudioBarGraphPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackAudioBarGraphPlugin::icon() const
{
	return QIcon();
}

QString QJackAudioBarGraphPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackAudioBarGraphPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackAudioBarGraphPlugin::isContainer() const
{
	return false;
}

QString QJackAudioBarGraphPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackAudioBarGraph\" name=\"qJackAudioBarGraph\">\n</widget>\n");
}

QString QJackAudioBarGraphPlugin::includeFile() const
{
	return QLatin1String("QJackAudioBarGraph.h");
}

