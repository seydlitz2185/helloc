#include <stdio.h>

int display (int * i);
int main() {
    int a[10] ={0,1,2,3,4,5,6,7,8,9} ;
    for(int i =0;i<10;i++){
        printf("%d ",a[i]);
    }
    display(a[1]);
    return 0;
}

int display(int * i){
    i--;
    printf(i);
}
