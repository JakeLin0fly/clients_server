#ifndef SERVER_H
#define SERVER_H

class Server
{
public:
	Server(const int &port);
	virtual ~Server();

public:
	void closeListenSocket();
	void closeConnectedSocket();
	void work();
	void response();

	static void *responseThread(void *);

private:
	bool initListenSocket();	//using in runListen()
	bool runListen();

private:
	int m_port;
	int m_listen_socket;
	int m_connected_socket;
	
};

#endif