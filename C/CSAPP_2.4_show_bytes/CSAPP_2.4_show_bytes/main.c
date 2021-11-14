//
//  main.c
//  CSAPP_2.4_show_bytes
//
//  Created by Steven Yu on 2021/11/14.
//

#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start , size_t len){
    size_t i ;
    for(i = 0; i < len; i++)
        printf(" %.2x",start[i]);
    printf("\n");
    
}

void show_int(int i){
    show_bytes((byte_pointer)&i, sizeof(int));
}

void show_float(float f){
    show_bytes((byte_pointer)&f, sizeof(float));
}

void show_pointer(void* x){
    show_bytes((byte_pointer)&x, sizeof(void *));
}

int main(int argc, const char * argv[]) {
    int val = 12345;
    int ival = val;
    float fval = (float)val;
    int* pval = &val;
    printf("val's hexadecimal: 0x%.8x\n",val);
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}
