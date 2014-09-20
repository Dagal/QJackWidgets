CONFIG      += plugin release
TARGET      = $$qtLibraryTarget(qjackcollectionplugin)
TEMPLATE    = lib

HEADERS     = QJackClientPlugin.h QJackAudioVuMeterPlugin.h QJackAudioBarGraphPlugin.h QJackEncoderPlugin.h QJackFaderPlugin.h QJackSoundButtonPlugin.h QJackInstrumentButtonPlugin.h QJackMidiButtonPlugin.h QJackPlayStopButtonPlugin.h QJackMidiChannelPlugin.h QJackSoundChannelPlugin.h QJackInstrumentChannelPlugin.h QJackPanEncoderPlugin.h QJackMidiBarGraphPlugin.h QJackLedPlugin.h QJackMidiSamplePlugin.h QJackInstrumentSamplePlugin.h QJackAudioSamplePlugin.h QJackSendReturnChannelPlugin.h QJackMasterChannelPlugin.h QJackProcessorUsePlugin.h QJackMonitorChannelPlugin.h QJackPlayPauseButtonPlugin.h QJackPlayButtonPlugin.h QJackPauseButtonPlugin.h QJackStopButtonPlugin.h QJackRewindButtonPlugin.h QJackFastForwardButtonPlugin.h QJackPreviousIndexButtonPlugin.h QJackNextIndexButtonPlugin.h QJackRecordButtonPlugin.h QJackTapTempoButtonPlugin.h QJackTempoEditPlugin.h QJackSignatureEditPlugin.h QJackExternalSyncViewPlugin.h QJackMidiLedPlugin.h QJackPositionViewPlugin.h QJackRepeatButtonPlugin.h QJackCollection.h \
		QJack.h \
    QJackVolumeFaderPlugin.h
SOURCES     = QJackClientPlugin.cpp QJackAudioVuMeterPlugin.cpp QJackAudioBarGraphPlugin.cpp QJackEncoderPlugin.cpp QJackFaderPlugin.cpp QJackSoundButtonPlugin.cpp QJackInstrumentButtonPlugin.cpp QJackMidiButtonPlugin.cpp QJackPlayStopButtonPlugin.cpp QJackMidiChannelPlugin.cpp QJackSoundChannelPlugin.cpp QJackInstrumentChannelPlugin.cpp QJackPanEncoderPlugin.cpp QJackMidiBarGraphPlugin.cpp QJackLedPlugin.cpp QJackMidiSamplePlugin.cpp QJackInstrumentSamplePlugin.cpp QJackAudioSamplePlugin.cpp QJackSendReturnChannelPlugin.cpp QJackMasterChannelPlugin.cpp QJackProcessorUsePlugin.cpp QJackMonitorChannelPlugin.cpp QJackPlayPauseButtonPlugin.cpp QJackPlayButtonPlugin.cpp QJackPauseButtonPlugin.cpp QJackStopButtonPlugin.cpp QJackRewindButtonPlugin.cpp QJackFastForwardButtonPlugin.cpp QJackPreviousIndexButtonPlugin.cpp QJackNextIndexButtonPlugin.cpp QJackRecordButtonPlugin.cpp QJackTapTempoButtonPlugin.cpp QJackTempoEditPlugin.cpp QJackSignatureEditPlugin.cpp QJackExternalSyncViewPlugin.cpp QJackMidiLedPlugin.cpp QJackPositionViewPlugin.cpp QJackRepeatButtonPlugin.cpp QJackCollection.cpp \
		QJack.cpp \
    QJackVolumeFaderPlugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L.

greaterThan(QT_MAJOR_VERSION, 4) {
		QT += designer
} else {
		CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(qjackexternalsyncview.pri)
include(qjackmasterchannel.pri)
include(qjackpanencoder.pri)
include(qjackplaystopbutton.pri)
include(qjackpositionview.pri)
include(qjackmidichannel.pri)
include(qjackpausebutton.pri)
include(qjacksoundbutton.pri)
include(qjackaudiobargraph.pri)
include(qjackpreviousindexbutton.pri)
include(qjackstopbutton.pri)
include(qjackfader.pri)
include(qjacksoundchannel.pri)
include(qjackmidisample.pri)
include(qjackmidiled.pri)
include(qjackrewindbutton.pri)
include(qjacktempoedit.pri)
include(qjackmonitorchannel.pri)
include(qjackinstrumentsample.pri)
include(qjackfastforwardbutton.pri)
include(qjackinstrumentchannel.pri)
include(qjackplaybutton.pri)
include(qjackencoder.pri)
include(qjackmidibutton.pri)
include(qjackrepeatbutton.pri)
include(qjackaudiosample.pri)
include(qjackclient.pri)
include(qjackprocessoruse.pri)
include(qjackled.pri)
include(qjacktaptempobutton.pri)
include(qjacksignatureedit.pri)
include(qjackplaypausebutton.pri)
include(qjackaudiovumeter.pri)
include(qjacksendreturnchannel.pri)
include(qjacknextindexbutton.pri)
include(qjackinstrumentbutton.pri)
include(qjackrecordbutton.pri)
include(qjackmidibargraph.pri)
include(qjackcpu.pri)
include(qjackchannel.pri)
include(qjackvolumefader.pri)
