#include <malloc.h>
#include <stdio.h>
#include "Socket.h"


void main()
{
	Socket_Client_Init("123.31.12.76", 80);
	//char msg[] = "GET /v1/bpi/currentprice.json HTTP/1.1\r\nHost: api.coindesk.com\r\n\r\n";
	char msg[] = "GET /gia-vang.html HTTP/1.1\r\nHost: vietinbankgold.vn\r\n\r\n";
	Send(msg);
	char buffer[102400] = { 0 };
	Recv(buffer, sizeof(buffer));
	//printf("%s", buffer);
	char* key = "num_price\">";
	char* temp = strstr(buffer, key);
	//temp += strlen(key) + 2;

	char giavang[32] = { 0 };
	int cnt = 0;
	while (temp[cnt] != ' ')
	{
		giavang[cnt] = temp[cnt];
		cnt++;
	}
	printf("%s", giavang);
}