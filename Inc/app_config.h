#ifndef _APP_CONFIG_H_
#define _APP_CONFIG_H_

#include "mbedtls_config.h"

#define HTTP_RESPONSE \
    "HTTP/1.0 200 OK\r\nContent-Type: text/html\r\n\r\n" \
    "<h2>mbed TLS Test Server</h2>\r\n" \
    "<p>Successful connection using: %s</p>\r\n"

//#define mbedtls_printf	printf


#ifdef USE_DHCP

#define IP_ADDR0  0
#define IP_ADDR1  0
#define IP_ADDR2  0
#define IP_ADDR3  0

#define GW_ADDR0  0
#define GW_ADDR1  0
#define GW_ADDR2  0
#define GW_ADDR3  0

#define MASK_ADDR0  0
#define MASK_ADDR1  0
#define MASK_ADDR2  0
#define MASK_ADDR3  0

#else

#define IP_ADDR0  192
#define IP_ADDR1  168
#define IP_ADDR2  2
#define IP_ADDR3  20

#define GW_ADDR0  192
#define GW_ADDR1  168
#define GW_ADDR2  2
#define GW_ADDR3  1

#define MASK_ADDR0  255
#define MASK_ADDR1  255
#define MASK_ADDR2  255
#define MASK_ADDR3  0

#define GW_ADDRESS      "192.168.2.1"
#define NETMASK_ADDRESS "255.255.255.0"

#endif /* USE_DHCP */
#ifdef MBEDTLS_MEMORY_BUFFER_ALLOC_C
#define MAX_MEM_SIZE 35 * 1024
#endif


#define DEBUG_LEVEL 5

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

void SSL_Server(void const *argument);
void Error_Handler(void);
void Success_Handler(void);


#endif
//
