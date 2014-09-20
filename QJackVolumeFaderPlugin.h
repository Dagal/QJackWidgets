#ifndef QJACKVOLUMEFADERPLUGIN_H
#define QJACKVOLUMEFADERPLUGIN_H

#include <QObject>

class QJackVolumeFaderPlugin : public QObject
{
	Q_OBJECT
public:
	explicit QJackVolumeFaderPlugin(QObject *parent = 0);

signals:

public slots:

};

#endif // QJACKVOLUMEFADERPLUGIN_H
