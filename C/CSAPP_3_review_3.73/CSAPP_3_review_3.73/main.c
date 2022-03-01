//
//  main.c
//  CSAPP_3_review_3.73
//
//  Created by Steven Yu on 2022/3/1.
//

#include <stdio.h>
#include <stdint.h>
int32_t tmult_ok1(int32_t x, int32_t y ,int32_t * dest){
    int32_t result = 0;
    *dest = x*y;
    asm("setae %al");
    return result;
}

