#include "QJackPreviousIndexButton.h"
#include "QJackPreviousIndexButtonPlugin.h"

#include <QtPlugin>

QJackPreviousIndexButtonPlugin::QJackPreviousIndexButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackPreviousIndexButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackPreviousIndexButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackPreviousIndexButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackPreviousIndexButton(parent);
}

QString QJackPreviousIndexButtonPlugin::name() const
{
	return QLatin1String("QJackPreviousIndexButton");
}

QString QJackPreviousIndexButtonPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackPreviousIndexButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackPreviousIndexButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackPreviousIndexButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackPreviousIndexButtonPlugin::isContainer() const
{
	return false;
}

QString QJackPreviousIndexButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackPreviousIndexButton\" name=\"qJackPreviousIndexButton\">\n</widget>\n");
}

QString QJackPreviousIndexButtonPlugin::includeFile() const
{
	return QLatin1String("QJackPreviousIndexButton.h");
}

