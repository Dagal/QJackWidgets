#include "QJackSendReturnChannel.h"
#include "QJackSendReturnChannelPlugin.h"

#include <QtPlugin>

QJackSendReturnChannelPlugin::QJackSendReturnChannelPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackSendReturnChannelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackSendReturnChannelPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackSendReturnChannelPlugin::createWidget(QWidget *parent)
{
	return new QJackSendReturnChannel(parent);
}

QString QJackSendReturnChannelPlugin::name() const
{
	return QLatin1String("QJackSendReturnChannel");
}

QString QJackSendReturnChannelPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackSendReturnChannelPlugin::icon() const
{
	return QIcon();
}

QString QJackSendReturnChannelPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackSendReturnChannelPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackSendReturnChannelPlugin::isContainer() const
{
	return false;
}

QString QJackSendReturnChannelPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackSendReturnChannel\" name=\"qJackSendReturnChannel\">\n</widget>\n");
}

QString QJackSendReturnChannelPlugin::includeFile() const
{
	return QLatin1String("QJackSendReturnChannel.h");
}

