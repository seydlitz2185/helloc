//
//  main.c
//  MergeSort
//
//  Created by Steven Yu on 2022/1/6.
//

#include <stdio.h>
#include <memory.h>
#include<stdlib.h>
void sort_and_divide(int *a,int len);

void merge(int* array,int*a,int*b,int len);
void show_array(int* a,int length);



int main(int argc, const char * argv[]) {
    // insert code here...
    int a[] ={3,4,65,7,42,133,0,6778,8,87,};
    int length = sizeof(a)/sizeof(a[0]);
    sort_and_divide(a,length);
    show_array(a,length);
    return 0;
}
void sort_and_divide(int *a,int length){
    
    if(length>1){
        int half_length = (int)length/2;
        
        int *prefix, *suffix;
        prefix = malloc(half_length * sizeof(int));
        suffix =malloc((length-half_length)*sizeof(int));
        
        for(int i = 0 ; i< half_length; i++){
            prefix[i] = a[i];
        }
        for(int i = 0 ; i< length-half_length; i++){
            suffix[i] = a[i+half_length];
        }
        sort_and_divide(prefix, half_length);
        sort_and_divide(suffix, length-half_length);
        merge(a,prefix,suffix,length);
    }
    
}

void show_array(int* a,int length){
    int* p = a;
    for(int i = 0 ; i < length; i++){
        printf("%d,",*p);
        p++;
    }
    printf("\n");
}

void merge(int* array,int* prefix, int* suffix,int length){
    int* a = array;
    int* p = prefix;
    int* s = suffix;
    int array_index = 0, p_index = 0,s_index=0;
    int length_of_prefix = length/2;
    int length_of_suffix = length-length_of_prefix;
    while ((p_index < length_of_prefix) && (s_index <length_of_suffix)) {
        if(*p < *s){
            *a= *p;
            p_index++;
            p++;
        }else{
            *a= *s;
            s_index++;
            s++;
        }
        a++;
    }
    

    while(p_index< length_of_prefix){
        *a = *p;
        p++;
        p_index++;
        a++;
    }
    while(s_index<=length_of_suffix){
        *a = *s;
        s++;
        s_index++;
        a++;
    }
}



