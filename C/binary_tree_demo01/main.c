#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NoInfo 0
#define MAXSIZE 100
typedef int ElemType;
typedef int Status;
typedef int QPosition;

typedef struct TNode *BinPosition;
typedef BinPosition BinTree;
struct TNode {/*树节点定义*/
    ElemType Data;
    BinTree Left;
    BinTree Right;
    BinPosition Next;
};

typedef struct LinkQNode *PtrToLQNode;
struct LinkQNode {
    BinPosition Front, Rear;
    int MaxSize;
};
typedef PtrToLQNode Queue;

Queue CreatLinkQueue()
{
    Queue Q = (Queue)malloc(sizeof(struct LinkQNode));
    if(Q){
        Q->Front = Q->Rear = (BinTree)malloc(sizeof(struct TNode));
        Q->MaxSize = MAXSIZE;
        Q->Front->Next = NULL;
        return Q;
    }
    else {
        printf("CreatLinkQueue ERROR");
        return Q;
    }
}
/*bool Q_IsFull(Queue Q)
{
    return(Q->Rear);
}*/
bool LQ_IsEmpty(Queue Q)
{
    return(Q->Front == NULL);
}
bool AddQ(Queue Q, BinTree BT)
{
    if(!BT ||!Q){
        printf("AddQ ERROR");
        return false;
    }
    else{
        BT->Next = NULL;
        Q->Rear->Next = BT;
        Q->Rear = BT;
        return true;
    }
}
BinTree DeleteQ(Queue Q)
{
    BinPosition FrontCell;
    if(LQ_IsEmpty){
        printf("ERROR");
        FrontCell = NULL;
    }
    else{
        FrontCell = Q->Front;
        if(Q->Front == Q->Rear){
            Q->Front = Q->Rear = NULL;
        }
        else {
            Q->Front = Q->Front->Next;
        }
    }
    return(FrontCell);
}
BinTree CreatBinTree( )
{
    ElemType input;
    BinTree BT, T;
    Queue Q = CreatLinkQueue();

    /*建立第一个结点，即根节点*/
    scanf("%d", &input);
    if (input != NoInfo) {
        /*分配结点单元，结点地址入队*/
        BT = (BinTree)malloc(sizeof(struct TNode));
        BT->Data = input;
        BT->Left = BT->Right = BT->Next = NULL;
        AddQ(Q,BT);
    }
    else return NULL;/*第一个数据就是0，返回空树*/

    while (!LQ_IsEmpty){
        T = DeleteQ(Q);
        scanf ("%d", &input);
        if(input == NoInfo) T->Left=NULL;
        else{
            T->Left = (BinTree)malloc(sizeof(struct TNode));
            T->Left->Data = input;
            T->Left->Left = T->Left->Right = NULL;
            AddQ(Q, T->Left);
        }
        scanf("%d",&input);
        if(input == NoInfo) T->Right=NULL;
        else{
            T->Right = (BinTree)malloc(sizeof(struct TNode));
            T->Right->Data = input;
            T->Right->Left = T->Right->Right = NULL;
            AddQ(Q, T->Right);
        }
    }
    return BT;
}

void PreorderPrintfLeaves(BinTree BT)
{
    if(BT){
        if(!BT->Left && !BT->Right)
            printf("%d",BT->Data);
        PreorderPrintfLeaves(BT->Left);
        PreorderPrintfLeaves(BT->Right);

    }
}

int main(void)
{
    BinTree BT;
    BT = CreatBinTree();
    PreorderPrintfLeaves(BT);
    return 0;
}