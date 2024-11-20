#include "main.h"
#include <winsock2.h>
#include <stdio.h>

int main() {
    // init Winsock

    WSADATA wsaData;

    int iResult;

    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
    if (iResult != 0) {
        printf("WSAStartup fhailed: %d\n", iResult);
        return 1;
    }

    // create a TCP Socket
    SOCKET sock = INVALID_SOCKET;
    int iFamily = AF_UNSPEC;
    int iType = SOCK_STREAM;
    int iProtocol = IPPROTO_TCP;
    sock = socket(iFamily, iType, iProtocol);


    return 0;
}
