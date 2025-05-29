// network_sim/layers/transport.h
#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <string>
using namespace std;

namespace TransportLayer {
    string Send(const string& data);
    string Receive(const string& data);
}

#endif // TRANSPORT_H