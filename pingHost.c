#include <stdio.h>
#include <stdlib.h>

int pingHost(char *hostname) {
    char bashCommand[50];
    snprintf(bashCommand, sizeof(bashCommand), "ping -W 2 -c 3 %s > /dev/null", hostname);
    //printf("\n%s\n%s\n", hostname, bashCommand);
    system(bashCommand);
    return 0;
}