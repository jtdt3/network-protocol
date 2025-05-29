// network_sim/layers/application.cpp
#include "application.h"
#include "transport.h"
#include <iostream>
using namespace std;

string ApplicationLayer::Send(const string& data) {
    cout << "[Application Layer] Sending: " << data << "\n";
    return TransportLayer::Send("APP_HDR|" + data);
}

string ApplicationLayer::Receive(const string& data) {
    string processed = data.substr(data.find("|") + 1);
    cout << "[Application Layer] Receiving: " << data << "\n";
    return processed;
}