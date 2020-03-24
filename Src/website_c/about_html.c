#include "lwip/apps/fs.h"
#include "lwip/def.h"
#include "responsehttpheaderoption.h"

static const unsigned int dummy_align__about_html = 5;
static const unsigned char data__about_html[] = {
	/* "/about.html" (12 chars) */
	0x2f,0x61,0x62,0x6f,0x75,0x74,0x2e,0x68,0x74,0x6d,0x6c,0x00,

	/* HTTP header */
	/* "HTTP/1.0 200 OK
	" (17 bytes) */
	0x48,0x54,0x54,0x50,0x2f,0x31,0x2e,0x30,0x20,0x32,0x30,0x30,0x20,0x4f,0x4b,0x0d,
	0x0a,
	
	/* "Server: HAVICOM-rs485-ethernet-gateway
	" (40 bytes) */
	0x53,0x65,0x72,0x76,0x65,0x72,0x3a,0x20,0x48,0x41,0x56,0x49,0x43,0x4f,0x4d,0x2d,
	0x72,0x73,0x34,0x38,0x35,0x2d,0x65,0x74,0x68,0x65,0x72,0x6e,0x65,0x74,0x2d,0x67,
	0x61,0x74,0x65,0x77,0x61,0x79, 0x0d, 0x0a,

#if USING_BROWSER_CACHE_STATIC_HTML > 0		
	/*  "cache-control: public, max-age=86400
	" */
	0x63, 0x61, 0x63, 0x68, 0x65, 0x2d, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 
	0x3a, 0x20, 0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, 0x2c, 0x20, 0x6d, 0x61, 0x78, 
	0x2d, 0x61, 0x67, 0x65, 0x3d, 0x38, 0x36, 0x34, 0x30, 0x30,  
	0x0d, 0x0a,
#endif

	/* "Content-type: text/html

	" (27 bytes) */
	0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x74,0x79,0x70,0x65,0x3a,0x20,0x74,0x65,
	0x78,0x74,0x2f,0x68,0x74,0x6d,0x6c,0x0d,0x0a,0x0d,0x0a,
	
/* raw file data (? bytes) */
0x3c,0x21,0x44,0x4f,0x43,0x54,0x59,0x50,0x45,0x20,0x48,0x54,0x4d,0x4c,0x20,0x50,0x55,0x42,0x4c,0x49,0x43,0x20,0x22,0x2d,0x2f,0x2f,0x57,0x33,0x43,0x2f,0x2f,0x44,0x54,0x44,0x20,0x48,0x54,0x4d,0x4c,0x20,0x34,0x2e,0x30,0x31,0x20,0x54,0x72,0x61,0x6e,0x73,0x69,0x74,0x69,0x6f,0x6e,0x61,0x6c,0x2f,0x2f,0x45,0x4e,0x22,0x20,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f,0x54,0x52,0x2f,0x68,0x74,0x6d,0x6c,0x34,0x2f,0x6c,0x6f,0x6f,0x73,0x65,0x2e,0x64,0x74,0x64,0x22,0x3e,0x0a,0x3c,0x68,0x74,0x6d,0x6c,0x3e,0x0a,0x3c,0x68,0x65,0x61,0x64,0x3e,0x0a,0x3c,0x6d,0x65,0x74,0x61,0x20,0x68,0x74,0x74,0x70,0x2d,0x65,0x71,0x75,0x69,0x76,0x3d,0x22,0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x54,0x79,0x70,0x65,0x22,0x20,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x3d,0x22,0x74,0x65,0x78,0x74,0x2f,0x68,0x74,0x6d,0x6c,0x3b,0x20,0x63,0x68,0x61,0x72,0x73,0x65,0x74,0x3d,0x75,0x74,0x66,0x2d,0x38,0x22,0x3e,0x0a,0x3c,0x74,0x69,0x74,0x6c,0x65,0x3e,0x52,0x53,0x34,0x38,0x35,0x20,0x2d,0x20,0x45,0x74,0x68,0x65,0x72,0x6e,0x65,0x74,0x20,0x77,0x65,0x62,0x73,0x65,0x72,0x76,0x65,0x72,0x3c,0x2f,0x74,0x69,0x74,0x6c,0x65,0x3e,0x0a,0x3c,0x6c,0x69,0x6e,0x6b,0x20,0x68,0x72,0x65,0x66,0x3d,0x22,0x2f,0x6d,0x61,0x69,0x6e,0x2e,0x63,0x73,0x73,0x22,0x20,0x72,0x65,0x6c,0x3d,0x22,0x73,0x74,0x79,0x6c,0x65,0x73,0x68,0x65,0x65,0x74,0x22,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x74,0x65,0x78,0x74,0x2f,0x63,0x73,0x73,0x22,0x3e,0x0a,0x3c,0x2f,0x68,0x65,0x61,0x64,0x3e,0x0a,0x0a,0x3c,0x62,0x6f,0x64,0x79,0x3e,0x0a,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6d,0x61,0x69,0x6e,0x22,0x3e,0x0a,0x20,0x20,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6c,0x65,0x66,0x74,0x62,0x61,0x72,0x22,0x20,0x3e,0x0a,0x20,0x20,0x20,0x20,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6d,0x61,0x69,0x6e,0x6c,0x6f,0x67,0x6f,0x22,0x20,0x3e,0x20,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x3d,0x22,0x23,0x22,0x3e,0x20,0x3c,0x69,0x6d,0x67,0x20,0x73,0x72,0x63,0x3d,0x22,0x2f,0x69,0x6d,0x61,0x67,0x65,0x73,0x2f,0x6c,0x6f,0x67,0x6f,0x36,0x30,0x78,0x36,0x31,0x70,0x78,0x2e,0x70,0x6e,0x67,0x22,0x20,0x61,0x6c,0x74,0x3d,0x22,0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x6c,0x6f,0x67,0x6f,0x22,0x20,0x3e,0x20,0x3c,0x2f,0x61,0x3e,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x68,0x33,0x3e,0x48,0x41,0x56,0x49,0x43,0x4f,0x4d,0x3c,0x2f,0x68,0x33,0x3e,0x0a,0x20,0x20,0x20,0x20,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0a,0x20,0x20,0x20,0x20,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6d,0x65,0x6e,0x75,0x62,0x61,0x72,0x22,0x3e,0x0a,0x20,0x20,0x20,0x20,0x20,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,0x3d,0x20,0x22,0x2f,0x69,0x6e,0x64,0x65,0x78,0x2e,0x73,0x68,0x74,0x6d,0x6c,0x22,0x20,0x20,0x3e,0x20,0x3c,0x69,0x6d,0x67,0x20,0x73,0x72,0x63,0x3d,0x22,0x2f,0x69,0x6d,0x61,0x67,0x65,0x73,0x2f,0x48,0x6f,0x6d,0x65,0x5f,0x49,0x43,0x4f,0x4e,0x2e,0x70,0x6e,0x67,0x22,0x20,0x61,0x6c,0x74,0x3d,0x22,0x48,0x6f,0x6d,0x65,0x20,0x69,0x63,0x6f,0x6e,0x22,0x20,0x20,0x3e,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x68,0x34,0x3e,0x48,0x6f,0x6d,0x65,0x3c,0x2f,0x68,0x34,0x3e,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x2f,0x61,0x3e,0x20,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,0x3d,0x20,0x22,0x2f,0x61,0x62,0x6f,0x75,0x74,0x2e,0x68,0x74,0x6d,0x6c,0x22,0x20,0x73,0x74,0x79,0x6c,0x65,0x3d,0x22,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x2d,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x35,0x35,0x35,0x22,0x20,0x3e,0x20,0x3c,0x69,0x6d,0x67,0x20,0x73,0x72,0x63,0x3d,0x22,0x2f,0x69,0x6d,0x61,0x67,0x65,0x73,0x2f,0x69,0x6e,0x66,0x6f,0x5f,0x49,0x43,0x4f,0x4e,0x2e,0x70,0x6e,0x67,0x22,0x20,0x61,0x6c,0x74,0x3d,0x22,0x41,0x62,0x6f,0x75,0x74,0x20,0x69,0x63,0x6f,0x6e,0x22,0x20,0x20,0x3e,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x68,0x34,0x3e,0x41,0x62,0x6f,0x75,0x74,0x3c,0x2f,0x68,0x34,0x3e,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x2f,0x61,0x3e,0x20,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0a,0x20,0x20,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0a,0x20,0x20,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x20,0x3d,0x22,0x72,0x69,0x67,0x68,0x74,0x62,0x61,0x72,0x22,0x3e,0x0a,0x20,0x20,0x20,0x20,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x20,0x22,0x74,0x69,0x74,0x6c,0x65,0x62,0x61,0x72,0x22,0x3e,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x68,0x32,0x3e,0x20,0x52,0x53,0x34,0x38,0x35,0x20,0x2d,0x20,0x45,0x74,0x68,0x65,0x72,0x6e,0x65,0x74,0x20,0x73,0x65,0x74,0x74,0x69,0x6e,0x67,0x20,0x73,0x69,0x74,0x65,0x20,0x3c,0x2f,0x68,0x32,0x3e,0x0a,0x20,0x20,0x20,0x20,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0a,0x20,0x20,0x20,0x20,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6d,0x61,0x69,0x6e,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x22,0x3e,0x0a,0x20,0x20,0x20,0x20,0x09,0x3c,0x69,0x6d,0x67,0x20,0x73,0x72,0x63,0x3d,0x22,0x2f,0x69,0x6d,0x61,0x67,0x65,0x73,0x2f,0x68,0x61,0x76,0x69,0x63,0x6f,0x6d,0x5f,0x6c,0x6f,0x67,0x6f,0x5f,0x31,0x36,0x30,0x78,0x33,0x39,0x70,0x78,0x2e,0x70,0x6e,0x67,0x22,0x3e,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x70,0x3e,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x62,0x72,0x2f,0x3e,0x0a,0x26,0x6e,0x62,0x73,0x70,0x26,0x6e,0x62,0x73,0x70,0x20,0x20,0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x61,0x20,0x64,0x65,0x76,0x69,0x63,0x65,0x20,0x63,0x6f,0x6c,0x6c,0x65,0x63,0x74,0x20,0x64,0x61,0x74,0x61,0x20,0x66,0x72,0x6f,0x6d,0x20,0x52,0x53,0x34,0x38,0x35,0x20,0x61,0x6e,0x64,0x20,0x73,0x65,0x6e,0x64,0x20,0x74,0x6f,0x20,0x61,0x6e,0x20,0x6f,0x74,0x68,0x65,0x72,0x20,0x45,0x74,0x68,0x65,0x72,0x6e,0x65,0x74,0x20,0x64,0x65,0x76,0x69,0x63,0x65,0x20,0x76,0x69,0x61,0x20,0x54,0x43,0x50,0x2f,0x49,0x50,0x20,0x70,0x72,0x6f,0x74,0x6f,0x63,0x6f,0x6c,0x2c,0x0a,0x64,0x61,0x74,0x61,0x20,0x67,0x65,0x74,0x20,0x66,0x72,0x6f,0x6d,0x20,0x52,0x53,0x34,0x38,0x35,0x20,0x77,0x69,0x6c,0x6c,0x20,0x6e,0x6f,0x74,0x20,0x63,0x68,0x61,0x6e,0x67,0x65,0x20,0x61,0x6e,0x64,0x20,0x73,0x65,0x6e,0x64,0x20,0x69,0x6d,0x65,0x64,0x69,0x61,0x74,0x6c,0x79,0x20,0x76,0x69,0x61,0x20,0x54,0x43,0x50,0x2f,0x49,0x50,0x2e,0x3c,0x62,0x72,0x2f,0x3e,0x0a,0x26,0x6e,0x62,0x73,0x70,0x26,0x6e,0x62,0x73,0x70,0x20,0x20,0x49,0x74,0x20,0x77,0x61,0x73,0x20,0x6d,0x61,0x64,0x65,0x20,0x62,0x79,0x20,0x48,0x41,0x56,0x49,0x43,0x4f,0x4d,0x20,0x56,0x49,0x45,0x54,0x20,0x4e,0x41,0x4d,0x20,0x4a,0x53,0x43,0x20,0x63,0x6f,0x6d,0x70,0x61,0x6e,0x79,0x2c,0x20,0x74,0x68,0x65,0x20,0x4f,0x44,0x4d,0x2f,0x4f,0x45,0x4d,0x20,0x63,0x6f,0x6d,0x70,0x61,0x6e,0x79,0x20,0x69,0x6e,0x20,0x56,0x69,0x65,0x74,0x20,0x4e,0x61,0x6d,0x2e,0x20,0x57,0x65,0x20,0x64,0x65,0x73,0x69,0x67,0x6e,0x20,0x61,0x6e,0x64,0x0a,0x6d,0x61,0x6e,0x75,0x61,0x66,0x61,0x63,0x74,0x75,0x72,0x65,0x20,0x6d,0x61,0x6e,0x79,0x20,0x65,0x6c,0x65,0x63,0x74,0x72,0x69,0x63,0x61,0x6c,0x20,0x64,0x65,0x76,0x69,0x63,0x65,0x2c,0x20,0x73,0x75,0x63,0x68,0x20,0x61,0x73,0x20,0x3a,0x20,0x4e,0x43,0x20,0x70,0x75,0x6e,0x63,0x68,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x20,0x73,0x79,0x73,0x74,0x65,0x6d,0x2c,0x20,0x4e,0x43,0x20,0x43,0x75,0x74,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x20,0x73,0x79,0x73,0x74,0x65,0x6d,0x2c,0x20,0x0a,0x54,0x65,0x6d,0x70,0x65,0x72,0x61,0x74,0x75,0x72,0x65,0x20,0x61,0x6e,0x64,0x20,0x68,0x75,0x6d,0x69,0x64,0x69,0x74,0x79,0x20,0x73,0x75,0x70,0x65,0x72,0x76,0x69,0x73,0x6f,0x72,0x20,0x61,0x6e,0x64,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x6c,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0x42,0x54,0x53,0x2c,0x20,0x20,0x62,0x61,0x73,0x69,0x63,0x20,0x43,0x4e,0x43,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x6c,0x65,0x72,0x2c,0x20,0x44,0x6f,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x6c,0x65,0x72,0x2c,0x0a,0x53,0x6d,0x61,0x72,0x74,0x20,0x68,0x6f,0x6d,0x65,0x20,0x64,0x65,0x76,0x69,0x63,0x65,0x2c,0x20,0x49,0x6f,0x54,0x20,0x64,0x65,0x76,0x69,0x63,0x65,0x2c,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x20,0x65,0x6c,0x65,0x63,0x74,0x72,0x6f,0x6e,0x69,0x63,0x73,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x62,0x79,0x20,0x74,0x68,0x65,0x20,0x63,0x75,0x73,0x74,0x6f,0x6d,0x65,0x72,0x2e,0x0a,0x0a,0x3c,0x62,0x72,0x2f,0x3e,0x0a,0x3c,0x62,0x72,0x2f,0x3e,0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x3d,0x20,0x22,0x68,0x74,0x74,0x70,0x73,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x68,0x61,0x76,0x69,0x63,0x6f,0x6d,0x2e,0x76,0x6e,0x22,0x3e,0x20,0x57,0x65,0x62,0x73,0x69,0x74,0x65,0x3a,0x20,0x77,0x77,0x77,0x2e,0x68,0x61,0x76,0x69,0x63,0x6f,0x6d,0x2e,0x76,0x6e,0x3c,0x2f,0x61,0x3e,0x3c,0x62,0x72,0x2f,0x3e,0x0a,0x70,0x68,0x6f,0x6e,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x3a,0x20,0x3c,0x62,0x72,0x2f,0x3e,0x0a,0x65,0x6d,0x61,0x69,0x6c,0x3a,0x20,0x69,0x6e,0x66,0x6f,0x40,0x68,0x61,0x76,0x69,0x63,0x6f,0x6d,0x2e,0x76,0x6e,0x0a,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x2f,0x70,0x3e,0x0a,0x09,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0a,0x20,0x20,0x20,0x20,0x0a,0x20,0x20,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0a,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0a,0x3c,0x2f,0x62,0x6f,0x64,0x79,0x3e,0x0a,0x3c,0x2f,0x68,0x74,0x6d,0x6c,0x3e,0x0a,
};
