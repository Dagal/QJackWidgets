#include "QJackPlayButton.h"
#include "QJackPlayButtonPlugin.h"

#include <QtPlugin>

QJackPlayButtonPlugin::QJackPlayButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackPlayButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackPlayButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackPlayButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackPlayButton(parent);
}

QString QJackPlayButtonPlugin::name() const
{
	return QLatin1String("QJackPlayButton");
}

QString QJackPlayButtonPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackPlayButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackPlayButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackPlayButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackPlayButtonPlugin::isContainer() const
{
	return false;
}

QString QJackPlayButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackPlayButton\" name=\"qJackPlayButton\">\n</widget>\n");
}

QString QJackPlayButtonPlugin::includeFile() const
{
	return QLatin1String("QJackPlayButton.h");
}

