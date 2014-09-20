#include "QJackMidiBarGraph.h"
#include "QJackMidiBarGraphPlugin.h"

#include <QtPlugin>

QJackMidiBarGraphPlugin::QJackMidiBarGraphPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackMidiBarGraphPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackMidiBarGraphPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackMidiBarGraphPlugin::createWidget(QWidget *parent)
{
	return new QJackMidiBarGraph(parent);
}

QString QJackMidiBarGraphPlugin::name() const
{
	return QLatin1String("QJackMidiBarGraph");
}

QString QJackMidiBarGraphPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackMidiBarGraphPlugin::icon() const
{
	return QIcon();
}

QString QJackMidiBarGraphPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackMidiBarGraphPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackMidiBarGraphPlugin::isContainer() const
{
	return false;
}

QString QJackMidiBarGraphPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackMidiBarGraph\" name=\"qJackMidiBarGraph\">\n</widget>\n");
}

QString QJackMidiBarGraphPlugin::includeFile() const
{
	return QLatin1String("QJackMidiBarGraph.h");
}

