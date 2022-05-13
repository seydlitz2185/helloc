#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[] ){
    char* fsave = malloc(108);
    printf("sizeof fsave : %lu\n",sizeof(fsave));
    printf("sizeof fsave : %lu",sizeof(fsave));
    return 0;
}