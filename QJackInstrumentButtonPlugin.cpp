#include "QJackInstrumentButton.h"
#include "QJackInstrumentButtonPlugin.h"

#include <QtPlugin>

QJackInstrumentButtonPlugin::QJackInstrumentButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackInstrumentButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackInstrumentButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackInstrumentButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackInstrumentButton(parent);
}

QString QJackInstrumentButtonPlugin::name() const
{
	return QLatin1String("QJackInstrumentButton");
}

QString QJackInstrumentButtonPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackInstrumentButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackInstrumentButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackInstrumentButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackInstrumentButtonPlugin::isContainer() const
{
	return false;
}

QString QJackInstrumentButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackInstrumentButton\" name=\"qJackInstrumentButton\">\n</widget>\n");
}

QString QJackInstrumentButtonPlugin::includeFile() const
{
	return QLatin1String("QJackInstrumentButton.h");
}

