//
//  main.c
//  CSAPP_3.5_Assemble_cqto
//
//  Created by Steven Yu on 2021/11/26.
//

#include <stdio.h>

void remdiv(long x, long y, long * qp, long *rp){
    long q = x/y;
    long r = x%y;
    *qp = q;
    *rp = r;
}
