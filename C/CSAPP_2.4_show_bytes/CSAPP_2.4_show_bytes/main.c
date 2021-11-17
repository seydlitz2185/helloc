//
//  main.c
//  CSAPP_2.4_show_bytes
//
//  Created by Steven Yu on 2021/11/14.
//

#include <stdio.h>
#include "string.h"
#include "limits.h"
#include "math.h"

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

int ex2_12_1(int x){
    return  x & 0xFF;
}

int ex2_12_2(int x){
    //return (~(x^ex2_12_1(x))^0xFF)|ex2_12_1(x);
    return x^~0xFF;
}

int ex2_12_3(int x){
    //return (x^ex2_12_1(x))|0xFF;
    return x|0xFF;
}
/*Determine whether arugments can be add without overflow*/
int tadd_ok(int x,int y){
    return !(x && y) && !(x&&y);
}
/*Determine whether arugments can be substracted without overflow*/
int tsub_ok(int x, int y){
    /*Waring: This code is buggy while y = INT_MIN, x<0*/
    return tadd_ok(x,-y);
}

int main(int argc, const char * argv[]) {
    int val = 0x87654321;
    int ival = val;
    float fval = (float)val;
    int* pval = &val;
    printf("val's hexadecimal: 0x%.8x\n",val);
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
    printf("\n");
    char*s = "abcdef\0";
    printf("string s:");
    for(int i = 0; i < strlen(s); i++){
        printf("%c",s[i]);
    }
    printf("\n");
    show_bytes((byte_pointer)s, strlen(s));
    printf("\n");
    printf("Ox%0.8x\n",ex2_12_1(val));
    printf("Ox%0.8x\n",ex2_12_2(val));
    printf("Ox%0.8x\n",ex2_12_3(val));
    printf("\n");
    int tadd1 = INT_MAX;
    int tadd2 = 0;
    int tsub1 = -1;
    int tsub2 = INT_MIN;
    printf("tadd_ok:%d, %d, %d\n",tadd1,tadd2,tadd_ok(tadd1,tadd2 ));
    printf("tadd_ok:%d, %d, %d\n",tsub1,tsub2,tsub_ok(tsub1,tsub2));
    int ele_cnt =1048577;
    size_t ele_size = 4096;
    printf("%d * %d = %d\n", ele_cnt,ele_size,ele_cnt*ele_size);
    printf("\n");
}
