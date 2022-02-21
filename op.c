
#include "op.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int calculator(int argc, char *argv[]) {

    if (argc == 1) {
        printf("Error!\n");
        return 0;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    int erg = 0;

    printf(argv[2]);

    if((strcmp(argv[2], "+"))==0){
        erg = a + b;
    } else if ((strcmp(argv[2], "-"))==0){
        erg = a-b;
    } else if ((strcmp(argv[2], "/"))==0){
        erg = a/b;
    } else if((strcmp(argv[2], "\"*\""))==0){
        erg = a * b;
    }
    printf("%d",erg);
    return erg;


}