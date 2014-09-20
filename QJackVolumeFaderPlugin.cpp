#include "QJackVolumeFader.h"
#include "QJackVolumeFaderPlugin.h"

#include <QtPlugin>

QJackVolumeFaderPlugin::QJackVolumeFaderPlugin(QObject *parent) :
	QObject(parent)
{
	m_initialized = false;
}

bool QJackVolumeFaderPlugin::isContainer() const
{
	return false;
}

bool QJackVolumeFaderPlugin::isInitialized() const
{
	return m_initialized;
}

QIcon QJackVolumeFaderPlugin::icon() const
{
	return QIcon();
}

QString QJackVolumeFaderPlugin::domXml() const
{
	return QLatin1String("<widget class=\"QJackVolumeFader\" name=\"qJackVolumeFader\">\n</widget>\n");
}

QString QJackVolumeFaderPlugin::group() const
{
	return QLatin1String("QJack");
}

QString QJackVolumeFaderPlugin::includeFile() const
{
	return QLatin1String("QJackVolumeFader.h");
}

QString QJackVolumeFaderPlugin::name() const
{
	return QLatin1String("QJackVolumeFader");
}

QString QJackVolumeFaderPlugin::toolTip() const
{
	return QLatin1String("");
}

QString QJackVolumeFaderPlugin::whatsThis() const
{
	return QLatin1String("");
}

QWidget*QJackVolumeFaderPlugin::createWidget(QWidget* parent)
{
	return new QJackVolumeFader(parent);
}

void QJackVolumeFaderPlugin::initialize(QDesignerFormEditorInterface* core)
{
	if (m_initialized)
		return;

	m_initialized = true;
}

