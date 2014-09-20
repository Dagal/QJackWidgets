#include "QJackPlayPauseButton.h"
#include "QJackPlayPauseButtonPlugin.h"

#include <QtPlugin>

QJackPlayPauseButtonPlugin::QJackPlayPauseButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackPlayPauseButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackPlayPauseButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackPlayPauseButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackPlayPauseButton(parent);
}

QString QJackPlayPauseButtonPlugin::name() const
{
	return QLatin1String("QJackPlayPauseButton");
}

QString QJackPlayPauseButtonPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackPlayPauseButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackPlayPauseButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackPlayPauseButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackPlayPauseButtonPlugin::isContainer() const
{
	return false;
}

QString QJackPlayPauseButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackPlayPauseButton\" name=\"qJackPlayPauseButton\">\n</widget>\n");
}

QString QJackPlayPauseButtonPlugin::includeFile() const
{
	return QLatin1String("QJackPlayPauseButton.h");
}

