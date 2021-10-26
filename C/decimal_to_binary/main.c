#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define STACKSIZE 100
typedef int ElemType;
typedef int Status;

typedef struct SNode *Stack;//声明
struct SNode{
    ElemType data;
    struct SNode*Next;
};


int IsEmpty(Stack S)
{
    if(S->Next == NULL){
        return 1;
    } else return 0;
}

void Push (ElemType item, Stack S)
{
    struct SNode*TmpCell;
    TmpCell=(struct SNode*)malloc(sizeof(struct SNode));
    TmpCell->data = item;
    TmpCell->Next = S->Next;
    S->Next = TmpCell;
}
ElemType Pop (Stack S)
{
    struct SNode *FirstCell;
    ElemType TopElem;
    if (IsEmpty(S)){
        printf("Stack is empty");
        return ERROR;
    } else {
        FirstCell = S->Next;
        S->Next = FirstCell->Next;
        TopElem = FirstCell->data;
        free(FirstCell);
        return TopElem;
    }
}

ElemType ExchangeBin(ElemType X)
{
    struct SNode *Num;
    int tag = 0;
    int temp = abs(X);
    if(X<0) tag = 1;
    Num=(struct SNode*)malloc(sizeof(struct SNode));
    Num->Next = NULL;
    while (temp)
    {
        Push(temp%2,Num);
        temp/=2;
    }
    if (tag) printf("-");
    while (IsEmpty(Num)!=1)
        printf("%2d",Pop(Num));
    printf("\n\n");
    return 0;
}
int main(void)
{
    ElemType X;
    printf("Please input a number in tens:");
    scanf("%d",&X);
    ExchangeBin(X);
    return 0;
}