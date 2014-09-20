#include "QJackMasterChannel.h"
#include "QJackMasterChannelPlugin.h"

#include <QtPlugin>

QJackMasterChannelPlugin::QJackMasterChannelPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackMasterChannelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackMasterChannelPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackMasterChannelPlugin::createWidget(QWidget *parent)
{
	return new QJackMasterChannel(parent);
}

QString QJackMasterChannelPlugin::name() const
{
	return QLatin1String("QJackMasterChannel");
}

QString QJackMasterChannelPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackMasterChannelPlugin::icon() const
{
	return QIcon();
}

QString QJackMasterChannelPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackMasterChannelPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackMasterChannelPlugin::isContainer() const
{
	return false;
}

QString QJackMasterChannelPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackMasterChannel\" name=\"qJackMasterChannel\">\n</widget>\n");
}

QString QJackMasterChannelPlugin::includeFile() const
{
	return QLatin1String("QJackMasterChannel.h");
}

