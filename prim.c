
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("Fail");
        return 0;
    }

    char isPrim = 0;
    int max = atoi(argv[1]);
    int count = 0;

    for (int i = 2; i <= max; ++i){
        isPrim = 0;
        for (int num = 2; num < i; ++num){
            if (i % num == 0) {
                isPrim = 1;
            }
        }
        if (isPrim == 0){
            printf("%d", i);
            printf("\t");
            ++count;
            if (count == 10){
                printf("\n");
                count = 0;
            }

        }
    }
    return 0;
}