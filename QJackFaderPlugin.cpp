#include "QJackFader.h"
#include "QJackFaderPlugin.h"

#include <QtPlugin>

QJackFaderPlugin::QJackFaderPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackFaderPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackFaderPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackFaderPlugin::createWidget(QWidget *parent)
{
	return new QJackFader(parent);
}

QString QJackFaderPlugin::name() const
{
	return QLatin1String("QJackFader");
}

QString QJackFaderPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackFaderPlugin::icon() const
{
	return QIcon();
}

QString QJackFaderPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackFaderPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackFaderPlugin::isContainer() const
{
	return false;
}

QString QJackFaderPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackFader\" name=\"qJackFader\">\n</widget>\n");
}

QString QJackFaderPlugin::includeFile() const
{
	return QLatin1String("QJackFader.h");
}

