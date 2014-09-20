#ifndef QJACKENCODER_H
#define QJACKENCODER_H

#include <QDial>

class QJackEncoder : public QDial
{
	Q_OBJECT

public:
	QJackEncoder(QWidget *parent = 0);
};

#endif
