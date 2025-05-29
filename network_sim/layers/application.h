// network_sim/layers/application.h
#ifndef APPLICATION_H
#define APPLICATION_H
#include <string>
using namespace std;

namespace ApplicationLayer {
    string Send(const string& data);
    string Receive(const string& data);
}

#endif // APPLICATION_H