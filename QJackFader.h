#ifndef QJACKFADER_H
#define QJACKFADER_H

#include <QSlider>

class QJackFader : public QSlider
{
	Q_OBJECT

public:
	QJackFader(QWidget *parent = 0);
};

#endif
