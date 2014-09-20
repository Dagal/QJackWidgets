#include "QJackSignatureEdit.h"
#include "QJackSignatureEditPlugin.h"

#include <QtPlugin>

QJackSignatureEditPlugin::QJackSignatureEditPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void QJackSignatureEditPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;

	// Add extension registrations, etc. here

	m_initialized = true;
}

bool QJackSignatureEditPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *QJackSignatureEditPlugin::createWidget(QWidget *parent)
{
	return new QJackSignatureEdit(parent);
}

QString QJackSignatureEditPlugin::name() const
{
	return QLatin1String("QJackSignatureEdit");
}

QString QJackSignatureEditPlugin::group() const
{
	return QLatin1String("QJack");
}

QIcon QJackSignatureEditPlugin::icon() const
{
	return QIcon();
}

QString QJackSignatureEditPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackSignatureEditPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool QJackSignatureEditPlugin::isContainer() const
{
	return false;
}

QString QJackSignatureEditPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackSignatureEdit\" name=\"qJackSignatureEdit\">\n</widget>\n");
}

QString QJackSignatureEditPlugin::includeFile() const
{
	return QLatin1String("QJackSignatureEdit.h");
}

