#include <stdio.h>
#include "checkInput.h"
#include "pingHost.h"

int main(int argc, char *argv[]) {
    char *hostname;
    
    checkInput(argc, argv, &hostname);

    int status = pingHost(hostname);

    if (status == 0) {
        printf("Host %s is alive.\n", hostname);
    } else {
        printf("Host %s is not reachable.\n", hostname);
    }

    return 0;
}
