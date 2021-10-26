#include <stdio.h>
#define MAX 3

void initialization(int * a);
void printArray(int * a);
void combine(int *a,int*b,int*c);
int getArrayLength(int * a);
int main(){
    int arr1[MAX];
    int arr2[MAX];
    int arrRet[6];
    int * p1,*p2,*ret;
    p1 = &arr1[0];
    p2 = &arr2[0];
    ret = &arrRet[0];
    initialization(p1);
   // initialization(p2);
   printf( "%d",getArrayLength(p1));
    //combine(p1,p2,ret);
   // printArray(ret);
    return 0;
}

void initialization(int * a){
    printf("请输入：\n");
    for(int i = 0; i<MAX;i++){
        scanf("%d", &a[i]);
    }
}

void printArray(int * a){
    for(int i =0;i<getArrayLength(a);i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void combine(int *a,int*b,int*c){
    for(int i = 0;i<getArrayLength(a);i++){
        c[i] = a[i];
    }
    int i  = 0;
    for(int j = getArrayLength(a);j<(getArrayLength(a)+getArrayLength(b));j++){
        c[j] = b[i];
        i++;
    }
}
int getArrayLength(int * a){
    int i = 0;
    while (a[i] != "\0"){
        i++;
    }
    return i;
}