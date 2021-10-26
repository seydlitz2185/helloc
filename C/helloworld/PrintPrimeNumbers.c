#include "stdio.h"
#define NUM 100
int isPrime(int input);

int main (int argc ,char * argv[]){
//   输出素数表
    int input = 0 ;
    int cnt = 0;
    scanf("%d",&input);
    for(int i = 1; i < input; i++){
        if(isPrime(i) == 1){
            printf("%d ",i);
            cnt++;
            if (cnt % 5 == 0){
                printf("\n");
            }
        }
    }
    return 0;
}

int isPrime (int input){
    int tag = 1;
    if(input == 1  || (input %2 == 0 && input >2 ) ){
        tag = 0;
    }
    for(int i =3 ; i < input; i+=2 ){
        if(input % i == 0){
            tag = 0;
            break;
        }
    }
    return  tag;
}
