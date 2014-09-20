#include "QJackLed.h"
#include "QJackLedPlugin.h"

#include <QtPlugin>

QJackLedPlugin::QJackLedPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackLedPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackLedPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackLedPlugin::createWidget(QWidget *parent)
{
	return new QJackLed(parent);
}

QString QJackLedPlugin::name() const
{
	return QLatin1String("QJackLed");
}

QString QJackLedPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackLedPlugin::icon() const
{
	return QIcon();
}

QString QJackLedPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackLedPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackLedPlugin::isContainer() const
{
	return false;
}

QString QJackLedPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackLed\" name=\"qJackLed\">\n</widget>\n");
}

QString QJackLedPlugin::includeFile() const
{
	return QLatin1String("QJackLed.h");
}

