#include "QJackClientPlugin.h"
#include "QJackAudioVuMeterPlugin.h"
#include "QJackAudioBarGraphPlugin.h"
#include "QJackEncoderPlugin.h"
#include "QJackFaderPlugin.h"
#include "QJackSoundButtonPlugin.h"
#include "QJackInstrumentButtonPlugin.h"
#include "QJackMidiButtonPlugin.h"
#include "QJackPlayStopButtonPlugin.h"
#include "QJackMidiChannelPlugin.h"
#include "QJackSoundChannelPlugin.h"
#include "QJackInstrumentChannelPlugin.h"
#include "QJackPanEncoderPlugin.h"
#include "QJackMidiBarGraphPlugin.h"
#include "QJackLedPlugin.h"
#include "QJackMidiSamplePlugin.h"
#include "QJackInstrumentSamplePlugin.h"
#include "QJackAudioSamplePlugin.h"
#include "QJackSendReturnChannelPlugin.h"
#include "QJackMasterChannelPlugin.h"
#include "QJackProcessorUsePlugin.h"
#include "QJackMonitorChannelPlugin.h"
#include "QJackPlayPauseButtonPlugin.h"
#include "QJackPlayButtonPlugin.h"
#include "QJackPauseButtonPlugin.h"
#include "QJackStopButtonPlugin.h"
#include "QJackRewindButtonPlugin.h"
#include "QJackFastForwardButtonPlugin.h"
#include "QJackPreviousIndexButtonPlugin.h"
#include "QJackNextIndexButtonPlugin.h"
#include "QJackRecordButtonPlugin.h"
#include "QJackTapTempoButtonPlugin.h"
#include "QJackTempoEditPlugin.h"
#include "QJackSignatureEditPlugin.h"
#include "QJackExternalSyncViewPlugin.h"
#include "QJackMidiLedPlugin.h"
#include "QJackPositionViewPlugin.h"
#include "QJackRepeatButtonPlugin.h"
#include "QJackCollection.h"

QJackCollection::QJackCollection(QObject *parent)
	: QObject(parent)
{
	m_widgets.append(new QJackClientPlugin(this));
	m_widgets.append(new QJackAudioVuMeterPlugin(this));
	m_widgets.append(new QJackAudioBarGraphPlugin(this));
	m_widgets.append(new QJackEncoderPlugin(this));
	m_widgets.append(new QJackFaderPlugin(this));
	m_widgets.append(new QJackSoundButtonPlugin(this));
	m_widgets.append(new QJackInstrumentButtonPlugin(this));
	m_widgets.append(new QJackMidiButtonPlugin(this));
	m_widgets.append(new QJackPlayStopButtonPlugin(this));
	m_widgets.append(new QJackMidiChannelPlugin(this));
	m_widgets.append(new QJackSoundChannelPlugin(this));
	m_widgets.append(new QJackInstrumentChannelPlugin(this));
	m_widgets.append(new QJackPanEncoderPlugin(this));
	m_widgets.append(new QJackMidiBarGraphPlugin(this));
	m_widgets.append(new QJackLedPlugin(this));
	m_widgets.append(new QJackMidiSamplePlugin(this));
	m_widgets.append(new QJackInstrumentSamplePlugin(this));
	m_widgets.append(new QJackAudioSamplePlugin(this));
	m_widgets.append(new QJackSendReturnChannelPlugin(this));
	m_widgets.append(new QJackMasterChannelPlugin(this));
	m_widgets.append(new QJackProcessorUsePlugin(this));
	m_widgets.append(new QJackMonitorChannelPlugin(this));
	m_widgets.append(new QJackPlayPauseButtonPlugin(this));
	m_widgets.append(new QJackPlayButtonPlugin(this));
	m_widgets.append(new QJackPauseButtonPlugin(this));
	m_widgets.append(new QJackStopButtonPlugin(this));
	m_widgets.append(new QJackRewindButtonPlugin(this));
	m_widgets.append(new QJackFastForwardButtonPlugin(this));
	m_widgets.append(new QJackPreviousIndexButtonPlugin(this));
	m_widgets.append(new QJackNextIndexButtonPlugin(this));
	m_widgets.append(new QJackRecordButtonPlugin(this));
	m_widgets.append(new QJackTapTempoButtonPlugin(this));
	m_widgets.append(new QJackTempoEditPlugin(this));
	m_widgets.append(new QJackSignatureEditPlugin(this));
	m_widgets.append(new QJackExternalSyncViewPlugin(this));
	m_widgets.append(new QJackMidiLedPlugin(this));
	m_widgets.append(new QJackPositionViewPlugin(this));
	m_widgets.append(new QJackRepeatButtonPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> QJackCollection::customWidgets() const
{
	return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(qjackcollectionplugin, QJackCollection)
#endif // QT_VERSION < 0x050000
