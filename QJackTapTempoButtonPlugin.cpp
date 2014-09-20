#include "QJackTapTempoButton.h"
#include "QJackTapTempoButtonPlugin.h"

#include <QtPlugin>

QJackTapTempoButtonPlugin::QJackTapTempoButtonPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackTapTempoButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackTapTempoButtonPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackTapTempoButtonPlugin::createWidget(QWidget *parent)
{
	return new QJackTapTempoButton(parent);
}

QString QJackTapTempoButtonPlugin::name() const
{
	return QLatin1String("QJackTapTempoButton");
}

QString QJackTapTempoButtonPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackTapTempoButtonPlugin::icon() const
{
	return QIcon();
}

QString QJackTapTempoButtonPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackTapTempoButtonPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackTapTempoButtonPlugin::isContainer() const
{
	return false;
}

QString QJackTapTempoButtonPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackTapTempoButton\" name=\"qJackTapTempoButton\">\n</widget>\n");
}

QString QJackTapTempoButtonPlugin::includeFile() const
{
	return QLatin1String("QJackTapTempoButton.h");
}

