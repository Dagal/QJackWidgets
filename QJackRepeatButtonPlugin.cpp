#include "QJackRepeatButton.h"
#include "QJackRepeatButtonPlugin.h"

#include <QtPlugin>

QJackRepeatButtonPlugin::QJackRepeatButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackRepeatButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackRepeatButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackRepeatButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackRepeatButton(parent);
}

QString QJackRepeatButtonPlugin::name() const
{
	return QLatin1String("QJackRepeatButton");
}

QString QJackRepeatButtonPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackRepeatButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackRepeatButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackRepeatButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackRepeatButtonPlugin::isContainer() const
{
	return false;
}

QString QJackRepeatButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackRepeatButton\" name=\"qJackRepeatButton\">\n</widget>\n");
}

QString QJackRepeatButtonPlugin::includeFile() const
{
	return QLatin1String("QJackRepeatButton.h");
}

