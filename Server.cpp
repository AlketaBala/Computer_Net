#include <iostream>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")

using namespace std;

void main()
{
	//Startup Winsock 
	WSADATA data;
	WORD version = MAKEWORD(2,2);
	int wsOk = WSAStartup(version, &data);
	if (wsOk != 0)
	{
		cout << "Can't start the Winsock! " << wsOk<<endl;
	}