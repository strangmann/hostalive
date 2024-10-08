#include <stdio.h>
#include <stdlib.h>

int ping_host(const char *hostname) {
    char command[100];
    snprintf(command, sizeof(command), "ping -c 3 %s > /dev/null", hostname);
    
    int status = system(command);
    
    if (status == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    const char *hostname = "google.com";
    
    if (ping_host(hostname)) {
        printf("Host %s is alive.\n", hostname);
        return 0;
    } else {
        printf("Host %s is not reachable.\n", hostname);
        return 1;
    }
}
