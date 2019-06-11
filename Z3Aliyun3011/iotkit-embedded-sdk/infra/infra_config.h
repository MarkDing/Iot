#ifndef _INFRA_CONFIG_H_
#define _INFRA_CONFIG_H_

#define PLATFORM_HAS_STDINT
#define PLATFORM_HAS_DYNMEM
#define PLATFORM_HAS_OS
#define INFRA_STRING
#define INFRA_NET
#define INFRA_LIST
#define INFRA_LOG_NETWORK_PAYLOAD
#define INFRA_LOG
#if  1
#define INFRA_LOG_ALL_MUTED
#define INFRA_LOG_MUTE_FLW
#define INFRA_LOG_MUTE_DBG
#define INFRA_LOG_MUTE_INF
#define INFRA_LOG_MUTE_WRN
#define INFRA_LOG_MUTE_ERR
#define INFRA_LOG_MUTE_CRT
#endif /* #if 0 */
#define INFRA_TIMER
#define INFRA_JSON_PARSER
#define INFRA_CJSON
#define INFRA_MD5
#define INFRA_SHA1
#define INFRA_SHA256
#define INFRA_REPORT
#define INFRA_HTTPC
#define INFRA_COMPAT
#define INFRA_CLASSIC
#define DEV_SIGN
#define MQTT_COMM_ENABLED
#define MQTT_DEFAULT_IMPL
#define MQTT_DIRECT
#define DYNAMIC_REGISTER
#define DEVICE_MODEL_CLASSIC
#define LOG_REPORT_TO_CLOUD
#define DEVICE_MODEL_ENABLED
#define DEVICE_MODEL_GATEWAY
//#define ALCS_ENABLED
#define HAL_KV
#define SUPPORT_TLS
#define HAL_CRYPTO
#define HAL_UDP
#define COAP_PACKET
#define COAP_SERVER
#define DEV_RESET
#define AWSS_SUPPORT_APLIST
#define AWSS_DISABLE_ENROLLEE
#define AWSS_DISABLE_REGISTRAR
#define AWSS_FRAMEWORKS
#define WIFI_PROVISION_ENABLED
#define AWSS_SUPPORT_DEV_AP
#define DEV_BIND_ENABLED

#endif
