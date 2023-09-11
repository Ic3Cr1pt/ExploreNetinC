#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define SERVER_IP "127.0.0.1"
#define PORT 8001

int main() {
    int client_socket;
    struct sockaddr_in server_address;
    char buffer[256] = "Hello, Server!";

    // Create a socket
    client_socket = socket(AF_INET, SOCK_STREAM, 0);

    // Specify server address
    server_address.sin_family = AF_INET;
    server_address.sin_port = PORT;
    inet_pton(AF_INET, SERVER_IP, &server_address.sin_addr);

    // Connect to server
    connect(client_socket, (struct sockaddr *) &server_address, sizeof(server_address));

    send(client_socket, buffer, sizeof(buffer), 0);

    // Close the socket
    close(client_socket);

    return 0;
}