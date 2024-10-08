/* 
Todo: Advanced IP-Address-Check in checkInput
*/
#include <stdio.h>
#include <string.h>

int checkInput(int argc, char *argv[], char **hostname) {
    if (argc != 3) {
        printf("Usage: %s -H <hostname>\n", argv[0]);
        return 1;
    } else if (strcmp(argv[1], "-H") !=0) {
        printf("Usage: %s -H <hostname>\n", argv[0]);
        return 1;
    } else {
        *hostname = argv[2];
        return 0;
    }
    return 1;
}