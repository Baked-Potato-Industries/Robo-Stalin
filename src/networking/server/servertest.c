#include "server.h"

int main() {
    struct Server server = server_Constructor(AF_INET, 5000, SOCK_STREAM, 0, 10, INADDR_ANY, launch);
    server.launch(&server);
    return 0;
}
