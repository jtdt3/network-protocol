# network-protocol

The main function starts by sending a message to the application layer. Once the message is sent through all the layers, it starts the receiving process from the link layer. It prints the final decapsulated message when the receiving process finishes. 

When sending, the application layer adds its header and sends to the transport layer. When receiving, the application layer removes its header and the message is totally decapsulated. 

When sending, the transport layer adds its header and sends to the network layer. When receiving, the transport layer removes its header and passes the message to the application layer. 

When sending, the network layer adds its header and sends to the link layer. When receiving, the network layer removes its header and passes the message to the transport layer. 

When sending, the link layer adds its header and sends to the link layer on the receiving end. When receiving, the link layer removes its header and passes the message to the network layer. 
