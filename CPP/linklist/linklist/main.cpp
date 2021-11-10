//
//  main.cpp
//  linklist
//
//  Created by Steven Yu on 2021/11/10.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define LlistSIZE 100
typedef int ElemType;
typedef int Status;

typedef struct LNode* LinkList;
struct LNode {//定义链表
    ElemType data;//用于存放数据
    struct LNode*next;//next指针
};

void CreateList_L(LinkList &L,int n)
{
    //逆位序输入n个元素的值，建立带表头结点的单链线性表L
    LinkList p;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;    //先建立一个带头结点的单链表
    for(int i=n;i>0;--i){
        p=(LinkList)malloc(sizeof(LNode));    //生成新节点
        scanf("%d",&p->data);    //输入元素值
        p->next=L->next;L->next=p;    //插入到表头里
    }
}



Status GetElem_L(LinkList L,int i,ElemType&e)
{
    //L为带头结点的单链表的头指针
    //当第i个元素存在时，其值赋给e并返回OK，否则返回ERROR
    LinkList p;
    p=L->next;    //初始化，p指向第一个结点，j为计数器
    int j=1;
    while(p&&j<i){    //顺指针向后查找，直到p指向第i个元素或p为空
        p=L->next;
        ++j;
    }
    if(!p||j>i)    return ERROR;    //第i个元素不存在
    e=p->data;        ////取第i个元素
    return OK;
}

Status ListInsert_L(LinkList &L,int i,ElemType e)//第i个位置插入元素e
{
    LinkList p,s;
    p=L;
    int j=0;
    while(p&&j<i-1)
    {
        p=p->next;
        ++j;
    }//寻找第i-1个结点
    if(!p||j>i-1)    return ERROR;
    s=(LinkList)malloc(sizeof(LNode)) ;
    s->data=e;
    s->next=p->next;
    p->next=s;
    return OK;
}

Status ListDelete_L(LinkList &L,int i,ElemType &e)//删除第i个元素，并由e返回其值
{
    LinkList p,q;
    p=L;
    int j=0;
    while(p->next&&j<i-1){        //寻找第i个结点，并令p指向其前趋
        p=p->next;
        ++j;
    }
    if(!(p->next)||j>i-1)    return ERROR;    //删除位置不合理
    q=p->next;
    p->next=q->next;    //删除结点
    e=q->data;
    free(q);
    return OK;
}

void display(LinkList &L)
{
    LinkList p=L->next;
    
        while(p){
            printf("%d,",p->data);
            p=p->next;
        }

    printf("\n");
    
}


int main()
{
    LinkList L;
    CreateList_L(L,3);
    //display(L);
    
    ListInsert_L(L,2,100);
    display(L);
    
    ElemType e;
    ListDelete_L(L,2,e);
    display(L);
    printf("被删除的值=%d\n",e);
    
    GetElem_L(L,3,e);
    printf("获取的值=%d\n",e);
    return 0;
    
}
