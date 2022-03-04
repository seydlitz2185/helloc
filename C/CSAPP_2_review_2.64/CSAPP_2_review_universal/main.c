//
//  main.c
//  CSAPP_2_review_
//  From 2.64 to 2.91
//
//  Created by Steven Yu on 2022/3/2.
//

#include <stdio.h>
#include <limits.h>
#include <assert.h>
/*2.64*/
int any_odd_one(unsigned x){
    return !!(0x55555555 & x);
}

/* 2.65*/
int odd_ones(unsigned x) {
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    x &= 0x1;
    return x;
}
/*2.66 */
int leftmost_one(unsigned x){
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    return (x >> 1) ^ x;
}

/*2.67*/
int int_size_is_32(void){
    int32_t set_msb = 1 << 31;
    int32_t beyond_msb = set_msb << 1;
    return set_msb && !beyond_msb ;
}

int int_size_is_32_for_16bit(void) {
    int set_msb = 1 << 15 << 15 << 1;
    int beyond_msb = set_msb << 1;
    printf("%x,%x\n",set_msb,beyond_msb);
    return set_msb && !beyond_msb;
}

/*2.68*/
int lower_one_mask(int n){
    int w = sizeof(int)<<3;
    return (unsigned)(-!!n) >> (w - n);
}

/*2.69*/
unsigned rotate_left(unsigned x , int n){
    int w = sizeof(int)<<3;
    return (x<<n) | x>>(w-n-1)>>1;
}
int main(int argc, const char * argv[]) {
    
    assert(!any_odd_one(0xAAAAAAAA));
    assert(odd_ones(0x11011001));
    printf("%x\n",leftmost_one(0x00000000));
    assert(int_size_is_32());
    assert(int_size_is_32_for_16bit());
    printf("%x\n",lower_one_mask(31));
    printf("%x\n",rotate_left(0x12345678,0));
    return 0;
}
