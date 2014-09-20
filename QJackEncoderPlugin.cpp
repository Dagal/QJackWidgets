#include "QJackEncoder.h"
#include "QJackEncoderPlugin.h"

#include <QtPlugin>

QJackEncoderPlugin::QJackEncoderPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackEncoderPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackEncoderPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackEncoderPlugin::createWidget(QWidget *parent)
{
	return new QJackEncoder(parent);
}

QString QJackEncoderPlugin::name() const
{
	return QLatin1String("QJackEncoder");
}

QString QJackEncoderPlugin::group() const
{
	return QLatin1String("");
}

QIcon QJackEncoderPlugin::icon() const
{
	return QIcon();
}

QString QJackEncoderPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackEncoderPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackEncoderPlugin::isContainer() const
{
	return false;
}

QString QJackEncoderPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackEncoder\" name=\"qJackEncoder\">\n</widget>\n");
}

QString QJackEncoderPlugin::includeFile() const
{
	return QLatin1String("QJackEncoder.h");
}

