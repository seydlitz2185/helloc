//
//  main.c
//  CSAPP_3_review_3.73
//
//  Created by Steven Yu on 2022/3/1.
//

#include <stdio.h>

int tmult_ok1(long x, long y ,long* dest){
    long result = 0;
    *dest = x*y;
    asm("setae %al");
    return result;
}

int main(int argc, const char * argv[]) {
    
    long *dest;
    tmult_ok1(10,9,dest);
    printf("%d",*dest);
    return 0;
}
