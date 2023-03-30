#include <stdio.h>
#include "linklist.h"

int main(int argc, const char* argv){
	LinkList L = initialization(L);
	printf("测试开始");
	for(int i= 0; i < 100 ; i++){
		insert_tail(L,i);
	}
	insert_head(L, 9999);
	print_list(L);
	printf("%d\n", L->size);	
	
	unsigned index ;
	printf("input a unsigned number:\n");
	scanf("%u",&index);
	Datatype deleted =  delete_index(L,index);
	if(deleted != NULL){
		printf("delete:%d\n",deleted);
	}
	insert_index(L,index,1024);
	print_list(L);
	printf("测试结束");
	return 0;	
}
