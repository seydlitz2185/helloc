//
//  main.c
//  String_Compare
//
//  Created by Steven Yu on 2021/11/18.
//

#include <stdio.h>
#include <string.h>

int compare(char *A , char *B){
    if(A==B){
        return strlen(A);
    }
    int *a, *b;
    char *a1, *b1;
    a = (int *)A;
    b = (int *)B;
    /*Compare by int(32 bit) , until meet first miss int*/
    while(*a++==*b++);
    /*Back to the missed index(--a,--b), set a1, b1 and cast into (char*) */
        a1 = (char*)--a;
        b1 = (char*)--b;
    /*Compare by char(8 bit), until meet first miss char*/
    while (*a1++==*b1++);
    /*Back to the missed index*/
    --b1;
    /*Return the length of compared string*/
    return b1-B;
}
int main(int argc, const char * argv[]) {
    char *A = "ABCDEfg";
    char *B = "ABCDEFF";
    /*Expected Compare_String_Length = 5*/
    int Compared_String_Length =compare(A,B );
    printf("%d\n",Compared_String_Length);
    return 0;
}
