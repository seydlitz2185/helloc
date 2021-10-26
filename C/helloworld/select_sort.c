#include "stdio.h"
#include "stdlib.h"
#define MAX 10
typedef struct {
    int key;
}SNode;
//使用数据结构实现选择排序
typedef struct {
    SNode r[MAX];
    int length;
}SqList;

void swap(SNode * a ,SNode * b){
    int key = a->key;
    a->key = b->key;
    b->key = key;
}

int selectMinKey(SqList * L, int i){
    int min = i;
//从下标为 i+1 开始，一直遍历至最后一个关键字，找到最小值所在的位置
    while (i+1 < L->length){
        if(L->r[min].key > L->r[i+1].key){
            min = i+1;
        }
        i++;
    }
    return min;
}

void selectSort(SqList * L){
    for(int i = 0; i< L->length; i++){
        int j = selectMinKey(L,i);
        if( i != j){
            swap(&(L->r[i]),&(L->r[j]));
        }
    }
}
int main (){
    SqList * L=(SqList*)malloc(sizeof(SqList));
    L->length=8;
    L->r[0].key=49;
    L->r[1].key=38;
    L->r[2].key=65;
    L->r[3].key=97;
    L->r[4].key=76;
    L->r[5].key=13;
    L->r[6].key=27;
    L->r[7].key=49;
    selectSort(L);
    for (int i=0; i<L->length; i++) {
        printf("%d ",L->r[i].key);
    }
    return 0;
}