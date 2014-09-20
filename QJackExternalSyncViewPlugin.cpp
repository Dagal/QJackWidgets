#include "QJackExternalSyncView.h"
#include "QJackExternalSyncViewPlugin.h"

#include <QtPlugin>

QJackExternalSyncViewPlugin::QJackExternalSyncViewPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackExternalSyncViewPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackExternalSyncViewPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackExternalSyncViewPlugin::createWidget(QWidget *parent)
{
	return new QJackExternalSyncView(parent);
}

QString QJackExternalSyncViewPlugin::name() const
{
	return QLatin1String("QJackExternalSyncView");
}

QString QJackExternalSyncViewPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackExternalSyncViewPlugin::icon() const
{
	return QIcon();
}

QString QJackExternalSyncViewPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackExternalSyncViewPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackExternalSyncViewPlugin::isContainer() const
{
	return false;
}

QString QJackExternalSyncViewPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackExternalSyncView\" name=\"qJackExternalSyncView\">\n</widget>\n");
}

QString QJackExternalSyncViewPlugin::includeFile() const
{
	return QLatin1String("QJackExternalSyncView.h");
}

