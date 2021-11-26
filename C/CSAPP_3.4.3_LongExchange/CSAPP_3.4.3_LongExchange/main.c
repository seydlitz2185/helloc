//
//  main.c
//  CSAPP_3.4.3_LongExchange
//
//  Created by Steven Yu on 2021/11/26.
//

#include <stdio.h>

long exchange(long *xp, long y){
    long x = *xp;
    *xp = y;
    return x;
}
