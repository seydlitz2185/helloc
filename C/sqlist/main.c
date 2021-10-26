#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define list_init_size 100   //线性表存储空间的初始分配量
#define LISTINCREMENT 10     //线性表存储空间的分配增量

typedef int  Status;
typedef int ElemType;

typedef  struct Node * PtrToNode;
struct  Node {
    ElemType  *elem; //存储空间基址
    int length; //当前长度
    int listsize ;//当前分配存储容量，以sizeof(ElemType)为单位
};
typedef PtrToNode  SqList;

Status InitList_Sq(SqList L) {
//构造一个空的线性表L
    if (L)
    {
        L->elem =(ElemType* )malloc(list_init_size * sizeof(ElemType));
    }
    if(!L->elem) exit(OVERFLOW);//存储分配失败
    L->length =0;               //空表长度为0
    return OK;
}//Initlist_Sq

Status ListInsert_Sq(SqList L,int i,ElemType e){
//在顺序线性表L中第i个位置之前插入新的元素e，
//i的合法值为1<=i<=ListLength_Sq(L)+1
    ElemType *p,*q,*newbase;        //定义指针
    if(i<1||i>L->length +1)
        return ERROR;               //i值不合法
    if(L->length >=L->listsize ){     //当前存储空间已满，增加分配
        newbase=(ElemType * )realloc(L->elem ,(L->listsize +LISTINCREMENT)*sizeof(ElemType));
        if(!newbase)exit(OVERFLOW); //存储分配失败
        L->elem =newbase;            //新基址
        L->listsize +=LISTINCREMENT; //增加存储容量
    }
    q=&(L->elem [i-1]);              //q为插入位置
    for(p=&(L->elem [L->length -1]);p>=q;--p)
        *(p+1)=*p;                  //插入位置及之后的元素右移
    *q=e;                           //插入e
    ++L->length ;                    //表长增1
    return OK;
}//ListInsert_Sq



void display(SqList L)
{   //定义for循环函数
    int i;
    for(i=0;i<=L->length -1;i++)
        printf("%d\n",L->elem [i]);
}




void main()
{
    SqList L;//定义线性表
    InitList_Sq(L);//调用空表
    //插入数据
    ListInsert_Sq(L,1,10);
    ListInsert_Sq(L,2,20);
    ListInsert_Sq(L,1,30);
    ListInsert_Sq(L,3,40);
    printf("插入后：\n");
    display(L);//调用循环函数
    ListInsert_Sq(L,3,100);//在L表第三个位置插入100
    printf("插入后：\n");
    display(L);




}

