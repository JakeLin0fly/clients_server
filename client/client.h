#ifndef ClIENT_H
#define ClIENT_H
// #define	MAX_BUFFER	200
#include <netinet/in.h>	//IPv4套接口地址结构
// #include <iostream>
typedef struct socketStruct
{
	int socket;
}socketStruct;
class Client
{
public:
	Client(int server_port, const char *server_ip_str);
	virtual ~Client();
	
public:
	bool clientSendRequest();
	static void* clientRecieveResponse(void *);
	// static void* threadClient(void *obj);
	void work();
	
private:
	bool initSocket();
	bool initServerIP_Port();
	bool init();
	
private:
	int m_server_port;
	char *m_server_ip_str;
	int m_socket;
	sockaddr_in m_server_addr;
};

#endif