#include "QJackProcessorUse.h"
#include "QJackProcessorUsePlugin.h"

#include <QtPlugin>

QJackProcessorUsePlugin::QJackProcessorUsePlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackProcessorUsePlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackProcessorUsePlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackProcessorUsePlugin::createWidget(QWidget *parent)
{
	return new QJackProcessorUse(parent);
}

QString QJackProcessorUsePlugin::name() const
{
	return QLatin1String("QJackProcessorUse");
}

QString QJackProcessorUsePlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackProcessorUsePlugin::icon() const
{
	return QIcon();
}

QString QJackProcessorUsePlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackProcessorUsePlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackProcessorUsePlugin::isContainer() const
{
	return false;
}

QString QJackProcessorUsePlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackProcessorUse\" name=\"qJackProcessorUse\">\n</widget>\n");
}

QString QJackProcessorUsePlugin::includeFile() const
{
	return QLatin1String("QJackProcessorUse.h");
}

