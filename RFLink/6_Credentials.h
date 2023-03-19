// ************************************* //
// * Arduino Project RFLink-esp        * //
// * https://github.com/couin3/RFLink  * //
// * 2018..2020 Stormteam - Marc RIVES * //
// * More details in RFLink.ino file   * //
// ************************************* //

#ifndef CREDENTIALS_h
#define CREDENTIALS_h

#include "RFLink.h"

// local AP
#define WIFI_SSID "happy_and";
#define WIFI_PSWD "alamakotaakotmaale";

// DHCP or Static IP
#define USE_DHCP
#ifndef USE_DHCP
#define WIFI_IP "192.168.1.xxx";
#define WIFI_DNS "192.168.1.xxx";
#define WIFI_GATEWAY "192.168.1.xxx";
#define WIFI_SUBNET "255.255.255.0";
#endif

// MQTT Server
#define  MQTT_SERVER "10.0.0.61"
#define  MQTT_PORT "1883";
#define  MQTT_ID "ESP8266-RFLink_RF315";
#define  MQTT_USER "mqtt";
#define  MQTT_PSWD "mqtt";

// MQTT Topic
#define MQTT_TOPIC_OUT "RF_Link/ESP_RF315/msg";
#define MQTT_TOPIC_IN "RF_Link/ESP_RF315/cmd";
#define MQTT_TOPIC_LWT "RF_Link/ESP_RF315/lwt";

// OTA
#define AutoOTA_URL "http://domain.com/firmware.bin"

#ifdef CHECK_CACERT
static const char ca_cert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIID (...)
-----END CERTIFICATE-----
)EOF";
#endif //CHECK_CACERT

#endif
