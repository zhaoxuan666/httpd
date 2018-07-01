/// \file read_config.h
/// \brief 配置文件相关
/// \author suntangji, suntangj2016@gmail.com
/// \version 1.0
/// \date 2018-07-01
#ifndef __READ_CONFIG_H__
#define __READ_CONFIG_H__

typedef struct {
  char ip[15];
  int port;
} config_t;

#define CONFIG_FILE_PATH "../conf/httpd.conf"
#define DEFAULT_PORT 8000
#define DEFAULT_IP "0.0.0.0"

int read_config(config_t *conf);

#endif /* end of include guard: __READ_CONFIG_H__ */