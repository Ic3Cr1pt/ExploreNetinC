#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8001

int main() {
    int server_socket, client_socket;
    struct sockaddr_in server_address, client_address;
    socklen_t client_len = sizeof(client_address);
    char buffer[256];

    // Create a socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // Specify an address for the socket
    server_address.sin_family = AF_INET;
    server_address.sin_port = PORT;
    server_address.sin_addr.s_addr = INADDR_ANY;

    bind(server_socket, (struct sockaddr *) &server_address, sizeof(server_address));
    listen(server_socket, 5);

    // Accept connection
    client_socket = accept(server_socket, (struct sockaddr *) &client_address, &client_len);

    // Loop to keep running server
    while (1) {
        memset(buffer, 0, sizeof(buffer));
        recv(client_socket, buffer, sizeof(buffer), 0);
        printf("Client said: %s\n", buffer);
        send(client_socket, buffer, sizeof(buffer), 0);
    }

    return 0;
}