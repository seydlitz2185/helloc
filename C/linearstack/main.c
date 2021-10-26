#include <stdio.h>
#include <stdlib.h>
#define ERROR -1
#define Ok 1
typedef int Status;
typedef int ElementType;
typedef int Position;
struct SNode {
    ElementType *Data; /* 存储元素的数组 */
    Position Top;      /* 栈顶指针 */
    int MaxSize;       /* 堆栈最大容量 */

};
typedef struct SNode * Stack;
void CreateStack( Stack *S,int MaxSize )
{
    (*S) = (Stack)malloc(sizeof(struct SNode));
    (*S)->Data = (ElementType *)malloc(MaxSize * sizeof(ElementType));
    (*S)->Top = -1;
    (*S)->MaxSize = MaxSize;
}
Status IsFull( Stack S )
{
    if(S->Top == S->MaxSize-1){
        return 1;
    }else return 0;
}
Status Push( Stack S, ElementType X )
{
    if ( IsFull(S) ) {
        printf("堆栈满");
        return 0;
    }   else {
        S->Data[++(S->Top)] = X;
        return 1;
    }
}
Status IsEmpty( Stack S )
{
    if(S->Top == -1){
        return 1;
    } else return 0;
}
ElementType Pop( Stack S )
{     if ( IsEmpty(S) ){
        printf("堆栈空");
        return ERROR; /* ERROR是ElementType的特殊值，标志错误 */
    } else  return ( S->Data[(S->Top)--] );
}

int  StackSize( Stack S )
{
    int i = S->Top+1;
    printf("StackSize is %d",i);
    return i ;
}
int main()
{
    Stack S;
    ElementType MaxSize = 6;
    CreateStack(&S,MaxSize);
    Push(S,0);
    Push(S,0);
    Push(S,0);
    Push(S,0);
    Push(S,0);
    Push(S,0);
    Push(S,0);
    StackSize (S);
    return 0;
}