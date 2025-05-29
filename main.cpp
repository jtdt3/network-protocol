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

// Output:
//Message sent: Hello, Network!

// ==== Sending ====
// [Application Layer] Sending: Hello, Network!
// [Transport Layer] Sending: APP_HDR|Hello, Network!
// [Network Layer] Sending: TRANS_HDR|APP_HDR|Hello, Network!
// [Link Layer] Sending: NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!

// ==== Receiving ====
// [Link Layer] Receiving: LINK_HDR|NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!
// [Network Layer] Receiving: NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!
// [Transport Layer] Receiving: TRANS_HDR|APP_HDR|Hello, Network!
// [Application Layer] Receiving: APP_HDR|Hello, Network!

// Final message received: Hello, Network!