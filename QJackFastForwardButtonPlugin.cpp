#include "QJackFastForwardButton.h"
#include "QJackFastForwardButtonPlugin.h"

#include <QtPlugin>

QJackFastForwardButtonPlugin::QJackFastForwardButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackFastForwardButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackFastForwardButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackFastForwardButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackFastForwardButton(parent);
}

QString QJackFastForwardButtonPlugin::name() const
{
	return QLatin1String("QJackFastForwardButton");
}

QString QJackFastForwardButtonPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackFastForwardButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackFastForwardButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackFastForwardButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackFastForwardButtonPlugin::isContainer() const
{
	return false;
}

QString QJackFastForwardButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackFastForwardButton\" name=\"qJackFastForwardButton\">\n</widget>\n");
}

QString QJackFastForwardButtonPlugin::includeFile() const
{
	return QLatin1String("QJackFastForwardButton.h");
}

