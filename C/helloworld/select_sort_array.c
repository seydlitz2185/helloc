#include "stdio.h"
#include "stdlib.h"
#define MAX 5
int * arrayInitialization(int length);
void printArray(int *a,int length);
int selectMinIndex(int *a,int i);
int selectMaxIndex(int *a,int i);
int* selectSort(int *a);
int* selectSortDesc(int *a);
int getArrayLength(int * a);
void swap(int*a,int i ,int j);
int main(int argc, char* argv[]){
    int *numbers;
//  int length;
//  scanf("%d",&length);
    numbers = arrayInitialization(MAX);
//    printf( "%d\n",getArrayLength(numbers));
    printArray(numbers,getArrayLength(numbers));
    numbers = selectSort(numbers);
    printArray(numbers,getArrayLength(numbers));
    numbers = selectSortDesc(numbers);
    printArray(numbers,getArrayLength(numbers));
    return 0;
}
void printArray(int *a,int length){
    for(int i =0;i<length;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int* arrayInitialization(int length){
    printf("Initialization:\n");
    int *numbers;
    numbers = (int*)malloc(length);
    for(int i = 0; i < length;i++){
        scanf("%d",&numbers[i]);
    }
    printf("Initialized;\n");
    return numbers;

}
int* selectSort(int *a){
    for(int i = 0;i<getArrayLength(a);i++){
        int j = selectMinIndex(a,i);
        if(i != j){
            swap(a,i,j);
        }
    }
    return a ;
}
int* selectSortDesc(int *a){
    for(int i = 0;i<getArrayLength(a);i++){
        int j = selectMaxIndex(a,i);
        if(i != j){
            swap(a,i,j);
        }
    }
    return a ;
}
int getArrayLength(int * a){
    int i = 0;
    while (a[i]){
        i++;
    }
    return i;
}
void swap(int*a,int i ,int j){
    int temp ;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int selectMinIndex(int *a,int i){
    int min  = i;
    while (i+1 < getArrayLength(a)){
        if(a[min]> a[i+1]){
            min = i+1;
        }
        i++;
    }
    return min;
}
int selectMaxIndex(int *a,int i){
    int max  = i;
    while (i+1 < getArrayLength(a)){
        if(a[max]< a[i+1]){
            max= i+1;
        }
        i++;
    }
    return max;
}