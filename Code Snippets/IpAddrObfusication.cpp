#include <winsock2.h>
#include <iostream>

int main() {
    // IP stored as hex: 0xC0A80001 == 192.168.0.1
    DWORD ipHex = 0xC0A80001;
    in_addr ipAddr;
    ipAddr.S_un.S_addr = ipHex;
    std::cout << "Connecting to: " << inet_ntoa(ipAddr) << std::endl;

    return 0;
}
// Inet_ntoa- is where the magic happens its takes the number and add the dots makes it an actuall ip that can be connected with winsockets. 
