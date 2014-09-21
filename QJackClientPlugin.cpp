#include "QJackClient.h"
#include "QJackClientPlugin.h"

#include <QtPlugin>

QJackClientPlugin::QJackClientPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackClientPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackClientPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackClientPlugin::createWidget(QWidget *parent)
{
	return new QJackClient(parent);
}

QString QJackClientPlugin::name() const
{
	return QLatin1String("QJackClient");
}

QString QJackClientPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackClientPlugin::icon() const
{
	return QIcon(":/QJackClient.xpm");
}

QString QJackClientPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackClientPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackClientPlugin::isContainer() const
{
	return false;
}

QString QJackClientPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackClient\" name=\"qJackClient\">\n</widget>\n");
}

QString QJackClientPlugin::includeFile() const
{
	return QLatin1String("QJackClient.h");
}

