//
//  main.c
//  CSAPP_2_review_2.63
//
//  Created by Steven Yu on 2022/3/1.
//

#include <stdio.h>
    /*Obey the Bit-level integer encoding rules
     on CS:APP page 88-89, also no right shift or division*/
unsigned srl(unsigned x, int k){
    /*Perform shift arithmatically*/
    unsigned xsra = (int) x >> k;
    int w = sizeof(int)<<3;
    int mask = -1<<(w-k);
    mask &=!( k | 0) -1;
    return xsra & ~mask;
}

unsigned sra(int x, int k){
    /*Perform shift logically*/
    int xsrl = (unsigned) x >> k;
    int w = sizeof(int)<<3;
    int mask = -1 << (w-k);
    int m = 1 << (w-1);
    mask &= !( x & m) -1;
    mask &= !( k | 0) -1;
    return xsrl | mask;
}
int main(int argc, const char * argv[]) {
    int a = 0xf0f00000;
    int b = 1;
     a &= b;
    printf("%x\n",a);
    printf("%x\n",0xFF >> 0);
    int k = 0;
    int kk = 4;
    printf("0x70000000 >> %d = 0x%x\n0xF0000000 >> %d = 0x%x\n", k,sra(0x70000000,k),k,sra(0xF0000000,k));
    //printf("0x70000000 >> %d = 0x%x\n0xF0000000 >> %d = 0x%x\n", k,srl(0x70000000,k),k,srl(0xF0000000,k));
    return 0;
}
