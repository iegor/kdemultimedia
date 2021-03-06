/*
 * sender.h
 *
 * Copyright (C) 2003-2007 Christophe Thommeret <hftom@free.fr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef SENDER_H
#define SENDER_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#include <qthread.h>
#include <qstring.h>
#include <qobject.h>



class Sender : public QThread, public QObject
{

public:

	Sender();
	~Sender();
	void run();
	void stop();
	void go();

	int senderSocket;
	struct sockaddr_in senderAddr;

protected:

	bool makeSenderSocket( const QString &addr, int m_senderPort );
	void closeSender();

	bool isRunning;
	QString sendList;

};

#endif /* SENDER_H */
