#ifndef QJACKCLIENT_H
#define QJACKCLIENT_H

#include <QProgressBar>

#include <QWidget>

class QJackClient : public QProgressBar
{
	Q_OBJECT

public:
	QJackClient(QWidget *parent = 0);
};

#endif
