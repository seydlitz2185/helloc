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
#include <memory.h>
#include <stdlib.h>
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

/*2.70*/
int fits_bits(int x, int n){
    int w = sizeof(int) << 3;
      int offset = w - n;
      return (x << offset >> offset) == x;
}

/*2.71*/
typedef unsigned packed_t;
int xbyte(packed_t word, int bytenum){
    int max_bytenum = 3;
    
    return (int)word<< ((max_bytenum-bytenum)<<3)>>(max_bytenum<<3) ;
}

/*2.72*/
void copy_int(int val, void *buf, int maxbytes){
    
    if((int)(maxbytes - sizeof(val)) >=0){
        memcpy(buf, (void*) &val, sizeof(val));
        printf("suc\n");
    }
}

/*2.73*/
/* 正溢返回INT_MAX,负溢返回INT_MIN*/


int staturating_add(int a, int b){
    /*遵守CSAPP第二章习题的位级整数编码规则*/
    int w = sizeof(int)<<3;
    int SA = a >> (w-1);
    /*SF用于表示两个加数的符号是否相同，同号SF = 0，异号SF = -1*/
    int SF = a>>(w-1) ^ b>>(w-1);
    /*若两数异号，一定不溢出，OF最后&～SF，异号时SF = -1，这时OF必定为0;
     若两数同号，将a+b的符号与任意一个加数的符号～SA异或，判断溢出情况
     如果a+b和加数异号，则认为溢出,0F = -1,否则为0*/
    int OF = ((a + b) >> (w - 1) ^ SA) & ~SF  ;
    /*用默认掩码0x80000000异或～SA生成掩码，
     如果两个加数是负数，～SA = 0，掩码不变，即INT_MIN，0x80000000
     若两个加数是正数，～SA = 1，相当于把掩码按位取反，即INT_MAX,0x7FFFFFFF
     对于任意位的int都成立
     */
    int mask = (OF<<(w-1)^~SA) & OF;
    /*如果没有溢出，OF和掩码都为0，这时&～OF和｜mask不影响a+b结果
     否则将返回掩码，即INT_MIN或INT_MAX*/
    return ((a+b)&~OF)|mask;
}
int (*f)(int,int) = &staturating_add;

int main(int argc, const char * argv[]) {
    
    assert(!any_odd_one(0xAAAAAAAA));
    assert(odd_ones(0x11011001));
    printf("%x\n",leftmost_one(0x40000000));
    assert(int_size_is_32());
    assert(int_size_is_32_for_16bit());
    printf("%x\n",lower_one_mask(31));
    printf("%x\n",rotate_left(0x12345678,0));
    assert(fits_bits(0x7FFFFFFF,32));
    printf("%x\n",xbyte(0xF2F4F6F8,2));
    void* buf;
    buf = (void*)malloc(100*sizeof(int));
    copy_int(100, buf, 1);
    assert(-1 == staturating_add(0xFFFFFFFE, 0x00000001));
    assert((0+INT_MAX)  == staturating_add(0, INT_MAX));
    assert((INT_MIN+0)  == staturating_add(INT_MIN, 0));
    assert((212323+42242)  == f(42242, 212323));
    assert(INT_MIN == staturating_add(0x80000000, 0x80000000));
    assert(INT_MAX == staturating_add(0x70000002, 0x7FFFFFFF));
    return 0;
}
