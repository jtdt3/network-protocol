// network_sim/layers/network.cpp
#include "network.h"
#include "link.h"
#include "transport.h"
#include <iostream>
using namespace std;

string NetworkLayer::Send(const string& data) {
    cout << "[Network Layer] Sending: " << data << "\n";
    return LinkLayer::Send("NET_HDR|" + data);
}

string NetworkLayer::Receive(const string& data) {
    string processed = data.substr(data.find("|") + 1);
    cout << "[Network Layer] Receiving: " << data << "\n";
    return TransportLayer::Receive(processed);
}