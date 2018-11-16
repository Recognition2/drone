//
// Created by gregory on 09/11/18.
//

#ifndef DRONE_WIFICONNECTOR_H
#define DRONE_WIFICONNECTOR_H

// We provide a C interface as well as a C++ interface
extern "C" {
void do_wifi();
}

class wifiConnector {
public:
    wifiConnector();
    ~wifiConnector();
};


#endif //DRONE_WIFICONNECTOR_H
