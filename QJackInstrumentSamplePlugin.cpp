#include "QJackInstrumentSample.h"
#include "QJackInstrumentSamplePlugin.h"

#include <QtPlugin>

QJackInstrumentSamplePlugin::QJackInstrumentSamplePlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackInstrumentSamplePlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackInstrumentSamplePlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackInstrumentSamplePlugin::createWidget(QWidget *parent)
{
	return new QJackInstrumentSample(parent);
}

QString QJackInstrumentSamplePlugin::name() const
{
	return QLatin1String("QJackInstrumentSample");
}

QString QJackInstrumentSamplePlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackInstrumentSamplePlugin::icon() const
{
	return QIcon();
}

QString QJackInstrumentSamplePlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackInstrumentSamplePlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackInstrumentSamplePlugin::isContainer() const
{
	return false;
}

QString QJackInstrumentSamplePlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackInstrumentSample\" name=\"qJackInstrumentSample\">\n</widget>\n");
}

QString QJackInstrumentSamplePlugin::includeFile() const
{
	return QLatin1String("QJackInstrumentSample.h");
}

