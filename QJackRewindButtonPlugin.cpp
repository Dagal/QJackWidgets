#include "QJackRewindButton.h"
#include "QJackRewindButtonPlugin.h"

#include <QtPlugin>

QJackRewindButtonPlugin::QJackRewindButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackRewindButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackRewindButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackRewindButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackRewindButton(parent);
}

QString QJackRewindButtonPlugin::name() const
{
	return QLatin1String("QJackRewindButton");
}

QString QJackRewindButtonPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackRewindButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackRewindButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackRewindButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackRewindButtonPlugin::isContainer() const
{
	return false;
}

QString QJackRewindButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackRewindButton\" name=\"qJackRewindButton\">\n</widget>\n");
}

QString QJackRewindButtonPlugin::includeFile() const
{
	return QLatin1String("QJackRewindButton.h");
}

