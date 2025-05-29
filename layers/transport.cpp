// network_sim/layers/transport.cpp
#include "transport.h"
#include "network.h"
#include "application.h"
#include <iostream>
using namespace std;

string TransportLayer::Send(const string& data) {
    cout << "[Transport Layer] Sending: " << data << "\n";
    return NetworkLayer::Send("TRANS_HDR|" + data);
}

string TransportLayer::Receive(const string& data) {
    string processed = data.substr(data.find("|") + 1);
    cout << "[Transport Layer] Receiving: " << data << "\n";
    return ApplicationLayer::Receive(processed);
}