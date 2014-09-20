#ifndef QJACKMIDICHANNEL_H
#define QJACKMIDICHANNEL_H

#include <QWidget>

class QJackMidiChannel : public QWidget
{
	Q_OBJECT

public:
	QJackMidiChannel(QWidget *parent = 0);
};

#endif
