// network_sim/layers/link.h
#ifndef LINK_H
#define LINK_H
#include <string>
using namespace std;

namespace LinkLayer {
    string Send(const string& data);
    string Receive(const string& data);
}

#endif // LINK_H