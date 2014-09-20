#include "QJackNextIndexButton.h"
#include "QJackNextIndexButtonPlugin.h"

#include <QtPlugin>

QJackNextIndexButtonPlugin::QJackNextIndexButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackNextIndexButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackNextIndexButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackNextIndexButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackNextIndexButton(parent);
}

QString QJackNextIndexButtonPlugin::name() const
{
	return QLatin1String("QJackNextIndexButton");
}

QString QJackNextIndexButtonPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackNextIndexButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackNextIndexButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackNextIndexButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackNextIndexButtonPlugin::isContainer() const
{
	return false;
}

QString QJackNextIndexButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackNextIndexButton\" name=\"qJackNextIndexButton\">\n</widget>\n");
}

QString QJackNextIndexButtonPlugin::includeFile() const
{
	return QLatin1String("QJackNextIndexButton.h");
}

