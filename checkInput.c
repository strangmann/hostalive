/* 
Todo: Advanced IP-Address-Check in checkInput
*/
#include <stdio.h>
#include <string.h>

int checkInput(int anzahlEingabeArray, char *eingabeArray[], char **hostname) {
    if (anzahlEingabeArray != 3) {
        printf("Usage: %s -H <hostname>\n", eingabeArray[0]);
        return 1;
    } else if (strcmp(eingabeArray[1], "-H") !=0) {
        printf("Usage: %s -H <hostname>\n", eingabeArray[0]);
        return 1;
    } else {
        *hostname = eingabeArray[2];
        return 0;
    }
    return 1;
}