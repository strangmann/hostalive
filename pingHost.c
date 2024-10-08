#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pingHost(char *hostname) {
    char bashCommand[(strlen(hostname))+33];
    snprintf(bashCommand, sizeof(bashCommand), "ping -W 2 -c 3 %s > /dev/null 2>&1", hostname);
    //printf("\n%s\n%s\n", hostname, bashCommand);
    int status = system(bashCommand);
    if (status == 0) {
        return 0;
    } else {
        return 1;
    }
}