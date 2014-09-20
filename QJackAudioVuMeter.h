#ifndef QJACKAUDIOVUMETER_H
#define QJACKAUDIOVUMETER_H

#include <QWidget>

class QJackAudioVuMeter : public QWidget
{
	Q_OBJECT

public:
	QJackAudioVuMeter(QWidget *parent = 0);
};

#endif
