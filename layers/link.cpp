// network_sim/layers/link.cpp
#include "link.h"
#include "network.h"
#include <iostream>
using namespace std;

string LinkLayer::Send(const string& data) {
    cout << "[Link Layer] Sending: " << data << "\n";
    return "LINK_HDR|" + data;
}

string LinkLayer::Receive(const string& data) {
    string processed = data.substr(data.find("|") + 1);
    cout << "[Link Layer] Receiving: " << data << "\n";
    return NetworkLayer::Receive(processed);
}