# Exploring the Foundations of Networking with C

## Description

This project serves as a basic introduction to socket programming in C. The aim is to create a simple client-server communication model to demonstrate the principles of networking.

## Features

- Simple Server and Client in C
- Uses TCP/IP Protocol
- Basic Error Handling

## Prerequisites

- GCC Compiler
- Basic C Programming Knowledge
- Basic Understanding of Computer Networks

## How to Run

1. Open two terminal windows: one for the server and one for the client.
2. Navigate to the project directory in both terminal windows.

**To compile and run the server:**

```bash
gcc server.c -o server
./server
```

**To compile and run the client:**
```bash
gcc client.c -o client
./client
```

## Code Structure
- `server.c`: Contains code for initializing a server socket, binding it, listening for incoming connections, and sending/receiving messages.
- `client.c`: Contains code for creating a client socket, connecting to the server, and sending/receiving messages.

## Author
- Ic3Cr1pt (Year: 2023)

## License
This project is licensed under the MIT License. See `LICENSE` for more details.
