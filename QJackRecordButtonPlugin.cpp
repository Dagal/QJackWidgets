#include "QJackRecordButton.h"
#include "QJackRecordButtonPlugin.h"

#include <QtPlugin>

QJackRecordButtonPlugin::QJackRecordButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackRecordButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackRecordButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackRecordButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackRecordButton(parent);
}

QString QJackRecordButtonPlugin::name() const
{
	return QLatin1String("QJackRecordButton");
}

QString QJackRecordButtonPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackRecordButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackRecordButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackRecordButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackRecordButtonPlugin::isContainer() const
{
	return false;
}

QString QJackRecordButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackRecordButton\" name=\"qJackRecordButton\">\n</widget>\n");
}

QString QJackRecordButtonPlugin::includeFile() const
{
	return QLatin1String("QJackRecordButton.h");
}

