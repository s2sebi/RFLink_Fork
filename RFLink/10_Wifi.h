#ifndef _10_WiFi_H
#define _10_WiFi_H

#include "RFLink.h"

#define RFLINK_WIFIMANAGER_ENABLED
#define RFLINK_WIFI_ENABLED

#ifdef RFLINK_WIFIMANAGER_ENABLED
#include <WiFiManager.h>
#elif RFLINK_WIFI_ENABLED
#ifdef ESP8266
#include "ESP8266WiFi.h"
#else
#include "WiFi.h"
#endif
#endif


namespace RFLink {
    namespace Wifi {
        void setup();
        void mainLoop();
        
        void stop_WIFI();
        void start_WIFI();
    }

    namespace AutoOTA {
        void checkForUpdateAndApply();
    }
}

#endif //_10_WiFi_H

