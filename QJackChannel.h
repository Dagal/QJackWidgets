#ifndef QJACKCHANNEL_H
#define QJACKCHANNEL_H

#include <QFrame>
#include <QVBoxLayout>
#include <QLabel>
#include "QJackPanEncoder.h"
#include "QJackVolumeFader.h"

class QJackChannel : public QFrame
{
	Q_OBJECT
public:
	explicit QJackChannel(QWidget *parent = 0);

protected:
	void setName(const QString& text);

signals:

public slots:

private:
	QVBoxLayout *m_vbox;
	QLabel *m_name;
	QJackPanEncoder *m_panoramique;
	QJackVolumeFader *m_volume;
};

#endif // QJACKCHANNEL_H
