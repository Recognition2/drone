//
// Created by gregory on 09/11/18.
//

#ifndef DRONE_WIFICONNECTOR_H
#define DRONE_WIFICONNECTOR_H

extern "C" {
void do_wifi();
}

class wifiConnector {
public:
    wifiConnector();
    ~wifiConnector();
};


#endif //DRONE_WIFICONNECTOR_H
