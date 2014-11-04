#ifndef __IP_SERVER_H
#define __IP_SERVER_H


#define at_linkMax 5

// typedef enum
// {
//   teClient,
//   teServer
// }teType;

typedef struct
{
	BOOL linkEn;
  	BOOL teToff;
	uint8_t linkId;
	teType teType;
	uint8_t repeaTime;
	struct espconn *pCon;
} espServerConnectionType;

void SetupServer(char *pPara);


// static void at_tcpserver_discon_cb(void *arg);

// static void at_tcpserver_recon_cb(void *arg, sint8 errType);

// static void at_tcpserver_listen(void *arg);

//  static void at_udpserver_recv(void *arg, char *pusrdata, unsigned short len);

#endif