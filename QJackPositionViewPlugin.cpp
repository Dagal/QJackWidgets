#include "QJackPositionView.h"
#include "QJackPositionViewPlugin.h"

#include <QtPlugin>

QJackPositionViewPlugin::QJackPositionViewPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackPositionViewPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackPositionViewPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackPositionViewPlugin::createWidget(QWidget *parent)
{
	return new QJackPositionView(parent);
}

QString QJackPositionViewPlugin::name() const
{
	return QLatin1String("QJackPositionView");
}

QString QJackPositionViewPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackPositionViewPlugin::icon() const
{
	return QIcon();
}

QString QJackPositionViewPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackPositionViewPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackPositionViewPlugin::isContainer() const
{
	return false;
}

QString QJackPositionViewPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackPositionView\" name=\"qJackPositionView\">\n</widget>\n");
}

QString QJackPositionViewPlugin::includeFile() const
{
	return QLatin1String("QJackPositionView.h");
}

