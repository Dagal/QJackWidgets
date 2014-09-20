#include "QJackPauseButton.h"
#include "QJackPauseButtonPlugin.h"

#include <QtPlugin>

QJackPauseButtonPlugin::QJackPauseButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackPauseButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackPauseButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackPauseButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackPauseButton(parent);
}

QString QJackPauseButtonPlugin::name() const
{
	return QLatin1String("QJackPauseButton");
}

QString QJackPauseButtonPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackPauseButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackPauseButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackPauseButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackPauseButtonPlugin::isContainer() const
{
	return false;
}

QString QJackPauseButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackPauseButton\" name=\"qJackPauseButton\">\n</widget>\n");
}

QString QJackPauseButtonPlugin::includeFile() const
{
	return QLatin1String("QJackPauseButton.h");
}

