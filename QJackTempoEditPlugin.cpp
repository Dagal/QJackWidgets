#include "QJackTempoEdit.h"
#include "QJackTempoEditPlugin.h"

#include <QtPlugin>

QJackTempoEditPlugin::QJackTempoEditPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackTempoEditPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackTempoEditPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackTempoEditPlugin::createWidget(QWidget *parent)
{
	return new QJackTempoEdit(parent);
}

QString QJackTempoEditPlugin::name() const
{
	return QLatin1String("QJackTempoEdit");
}

QString QJackTempoEditPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackTempoEditPlugin::icon() const
{
	return QIcon();
}

QString QJackTempoEditPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackTempoEditPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackTempoEditPlugin::isContainer() const
{
	return false;
}

QString QJackTempoEditPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackTempoEdit\" name=\"qJackTempoEdit\">\n</widget>\n");
}

QString QJackTempoEditPlugin::includeFile() const
{
	return QLatin1String("QJackTempoEdit.h");
}

