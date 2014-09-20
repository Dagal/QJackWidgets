#include "QJackStopButton.h"
#include "QJackStopButtonPlugin.h"

#include <QtPlugin>

QJackStopButtonPlugin::QJackStopButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackStopButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackStopButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackStopButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackStopButton(parent);
}

QString QJackStopButtonPlugin::name() const
{
	return QLatin1String("QJackStopButton");
}

QString QJackStopButtonPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackStopButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackStopButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackStopButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackStopButtonPlugin::isContainer() const
{
	return false;
}

QString QJackStopButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackStopButton\" name=\"qJackStopButton\">\n</widget>\n");
}

QString QJackStopButtonPlugin::includeFile() const
{
	return QLatin1String("QJackStopButton.h");
}

