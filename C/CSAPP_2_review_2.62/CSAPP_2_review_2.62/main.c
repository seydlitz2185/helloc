//
//  main.c
//  CSAPP_2_review_2.62
//
//  Created by Steven Yu on 2022/3/1.
//

#include <stdio.h>
#include <assert.h>

int int_shifts_are_arithmetic(void){
    /*对int类型数据使用算数右移的机器回返回1*/
    int i = -1;
    /*-1用int补码表示为32位全部为1，如果右移做算术右移，
     则仍然为-1，可以返回1，否则返回0*/
    return !(i ^(i >> 1));
}

int main(int argc, const char * argv[]) {
    
    assert(int_shifts_are_arithmetic());
    return 0;
}


