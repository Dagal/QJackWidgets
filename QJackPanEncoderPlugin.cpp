#include "QJackPanEncoder.h"
#include "QJackPanEncoderPlugin.h"

#include <QtPlugin>

QJackPanEncoderPlugin::QJackPanEncoderPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackPanEncoderPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackPanEncoderPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackPanEncoderPlugin::createWidget(QWidget *parent)
{
	return new QJackPanEncoder(parent);
}

QString QJackPanEncoderPlugin::name() const
{
	return QLatin1String("QJackPanEncoder");
}

QString QJackPanEncoderPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackPanEncoderPlugin::icon() const
{
	return QIcon();
}

QString QJackPanEncoderPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackPanEncoderPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackPanEncoderPlugin::isContainer() const
{
	return false;
}

QString QJackPanEncoderPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackPanEncoder\" name=\"qJackPanEncoder\">\n</widget>\n");
}

QString QJackPanEncoderPlugin::includeFile() const
{
	return QLatin1String("QJackPanEncoder.h");
}

