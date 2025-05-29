// network_sim/layers/network.h
#ifndef NETWORK_H
#define NETWORK_H
#include <string>
using namespace std;

namespace NetworkLayer {
    string Send(const string& data);
    string Receive(const string& data);
}

#endif // NETWORK_H
