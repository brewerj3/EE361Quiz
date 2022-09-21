#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(int argc, char ** argv) {
    printf("argc = %d\n",argc);
    for (int i=0; i<argc; i++) {
        int k;
        for (k=0; argv[i][k] != '\0'; k++) {
            if(strlen(argv[i]) == 5) {
                printf("%d: %s\n", k, argv[i]);
            }
        }
    }
}