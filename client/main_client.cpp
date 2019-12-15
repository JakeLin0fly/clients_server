#include "client.h"
#include <iostream>
#include <stdlib.h> //atoi
#define ERROR	-1
using namespace std;

int main(int argc, char const *argv[])
{
	if(argc != 3){
		cout << "start client: ./client port ip "<< endl;
		return ERROR;
	}
	// int main_socket;
	Client myClient(atoi(argv[1]), argv[2]);
	myClient.work();
	return 0;
}