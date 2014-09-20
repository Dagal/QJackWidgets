#include "QJackChannel.h"

QJackChannel::QJackChannel(QWidget *parent) :
	QFrame(parent)
{
	setFrameShape(QFrame::Panel);
	setFrameShadow(QFrame::Sunken);

	m_vbox = new QVBoxLayout;

	m_name = new QLabel(tr("noname"),this);
	m_vbox->addWidget(m_name);
	m_vbox->setAlignment(m_name,Qt::AlignHCenter);

	m_panoramique = new QJackPanEncoder(this);
	m_vbox->addWidget(m_panoramique);

	m_volume = new QJackVolumeFader(this);
	m_vbox->addWidget(m_volume);
	m_vbox->setAlignment(m_volume,Qt::AlignHCenter);

	setLayout(m_vbox);
}

void QJackChannel::setName(const QString& text)
{
	m_name->setText(text);
}
