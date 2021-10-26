#include <stdio.h>
#define MAXNUM 5
void bubbleDesc(int *p);
void bubbleDescPlus(int *p);
int main(){
    int num[MAXNUM] = {1,3,2,5,5};
    int *p;
    p = &num[0];
    printf("%p",p);
    bubbleDesc(p);//循环次数：bubbleDesc:55 bubbleDescPlus:49
    for(int i = 0; i<MAXNUM;i++){
        printf("%d ",num[i]);
    }
    return 0;
}

void bubbleDesc(int *p){
    int temp ;
    int n = 0;
    for(int i =0 ; i<MAXNUM;i++){
        for(int j = 0;j<MAXNUM-i;j++) {
            n++;
            if (p[j] < p[j + 1]) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    printf("%d\n",n);
}
void bubbleDescPlus(int *p){
    int temp ;
    int tag;
    int n = 0;
    for(int i =0 ; i<MAXNUM;i++){
        tag = 0;
        for(int j = 0;j<MAXNUM-i;j++) {
            n++;
            if (p[j] < p[j + 1]) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
                tag = 1;
            }
        }
        if(tag == 0){
            break;
        }
    }
    printf("%d\n",n);
}