#include <iostream>
#include <string>
#include "layers/application.h"
#include "layers/transport.h"
#include "layers/network.h"
#include "layers/link.h"

using namespace std;

int main() {
    string message = "Hello, Network!";
    cout << "Message sent: " << message << "\n\n";

    // Sending
    cout << "==== Sending ====\n";
    string sentMessage = ApplicationLayer::Send(message);

    // Receiving
    cout << "\n==== Receiving ====\n";
    string receivedMessage = LinkLayer::Receive(sentMessage);

    cout << "\nFinal message received: " << message << "\n";
    return 0;
}
