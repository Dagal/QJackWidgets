#include "QJackPlayStopButton.h"
#include "QJackPlayStopButtonPlugin.h"

#include <QtPlugin>

QJackPlayStopButtonPlugin::QJackPlayStopButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackPlayStopButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackPlayStopButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackPlayStopButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackPlayStopButton(parent);
}

QString QJackPlayStopButtonPlugin::name() const
{
	return QLatin1String("QJackPlayStopButton");
}

QString QJackPlayStopButtonPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackPlayStopButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackPlayStopButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackPlayStopButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackPlayStopButtonPlugin::isContainer() const
{
	return false;
}

QString QJackPlayStopButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackPlayStopButton\" name=\"qJackPlayStopButton\">\n</widget>\n");
}

QString QJackPlayStopButtonPlugin::includeFile() const
{
	return QLatin1String("QJackPlayStopButton.h");
}

