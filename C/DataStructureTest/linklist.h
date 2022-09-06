#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define  Datatype int

struct Node{
	struct Node* next;
	struct Node* pre;
	Datatype data;
};

typedef struct Node* Node;

struct List{
	Node head;
	Node tail;
	//default size = 0
	unsigned size;
};

typedef struct List * LinkList;

LinkList initialization(LinkList L ){
	L = (LinkList)malloc(sizeof(struct List));
	L -> head =  (Node)malloc(sizeof(struct Node));
	Node head = L->head;
	L -> tail = (Node)malloc(sizeof(struct Node));
	Node tail = L->tail;
	head->next = tail;
	tail->pre = head;
	return L;
}

bool insert_tail(LinkList L, Datatype data){
	if(L == NULL){
		return false;
	}
	Node temp = (Node) malloc( sizeof( struct Node));
	temp->data = data;
	temp->next = L->tail;
	temp->pre = L->tail->pre;
	L->tail->pre->next = temp;
	L->tail->pre = temp;
	L->size++;
	return true;
}

bool insert_head(LinkList L , Datatype data){
	if(L == NULL){
		return false;
	}
	Node temp = (Node) malloc( sizeof( struct Node));
	temp->data = data;
	temp->next = L->head->next;
	temp->pre = L->head;
	L->head->next->pre= temp;
	L->head->next = temp;
	L->size++;
	
	return true;

}

void print_list(LinkList L ){
	Node temp = L->head->next;
	printf("current_list: ");
	while(temp->next != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");

}

bool delete_target(LinkList L, Datatype data){
	Node temp = L->head->next; 
	while(temp->next != NULL){
		if(temp -> data == data){
			temp->next->pre = temp->pre;
			temp->pre->next = temp->next;
			free(temp);
			printf("Delete first Node with data equals to  %d Successfully\n",data);
			L->size--;
			return true;
		}
	}
	printf("Throw NoSuchELementException\n");
	return false;
	
}


//index will work as same as C built in array's index; range from 0 to (L->size)-1
Node find_index(LinkList L, unsigned index){
	Node temp = NULL;
	if(index >= L->size){
		printf("Throw IndexOutOfTheBoundException\n");
		return temp;
	}
	unsigned reverse_index =(L->size)-1 - index;
	//printf("%u\n",reverse_index);
	unsigned cnt = 0;
	if(reverse_index > index){
		temp = L->head->next;
		while(cnt != index){
			temp   = temp->next;
			cnt++;
		}
	}else{
		temp= L->tail->pre;
		while(cnt != reverse_index){
			temp =  temp->pre;
			cnt++;
		}
	}
	return temp;
}

Datatype delete_index(LinkList L, unsigned index){
	Node temp = find_index(L,index);
	if(temp == NULL){
		return NULL;
	}
	temp->next->pre = temp->pre;
	temp->pre->next = temp->next;
	Datatype data = temp-> data;
	free(temp);
	L->size--;
	printf("Delete Successfully!\n");
	return data;
}

bool insert_index(LinkList L, unsigned index, Datatype data){
	Node temp= find_index(L,index);
	if(temp == NULL){
		return false;
	}
	Node inserted = (Node)malloc(sizeof(struct Node));
	inserted -> data = data;
	temp->pre->next = inserted;
	inserted->pre = temp->pre;
	temp->pre = inserted;
	inserted->next = temp;
	L->size++;
	printf("Insert Successfully!\n");
	return true;
	
}
