#ifndef HTTPDESPFS_H
#define HTTPDESPFS_H

#include <esp8266.h>
#include "espfs/espfs.h"
#include "espfs/espfsformat.h"
#include "cgi.h"
#include "httpd/httpd.h"

int cgiEspFsHook(HttpdConnData *connData);
//int cgiEspFsTemplate(HttpdConnData *connData);
//int ICACHE_FLASH_ATTR cgiEspFsHtml(HttpdConnData *connData);

#endif
