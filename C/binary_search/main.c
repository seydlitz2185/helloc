#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100
typedef int ElemType;
typedef int Position;

typedef struct LNode *List;
struct LNode {
    ElemType Data[MAXSIZE];
    ElemType Length;
    Position Last;
};

bool MakeEmpty(List *Tbl)
{
    (*Tbl) = (List)malloc(sizeof(struct LNode));
    if (*Tbl) {
        (*Tbl)->Last = -1;
        return true;
    } else return false;
}
bool insert(List Tbl, ElemType X, Position P)
{
    Position i;
    if (Tbl->Last == MAXSIZE - 1) {
        printf("表满");
        return false;
    }
    if (P<0 || P>Tbl->Last + 1) {
        printf("位置不合法");
        return false;
    }
    for (i = Tbl->Last; i >= P; i--)
    {
        Tbl->Data [i+1]= Tbl->Data [i];
        Tbl->Data[P] = X;
        Tbl->Last++;
    }
    return true;
}
int BinarySearch(List Tbl, ElemType K)/*二分查找*/
{	/*在tbl中查找元素K*/
    int left, right, mid, NotFound = -1;/*定义左，右边界，中间位置和失败返回值*/

    left = 1;//左边界为1
    right = Tbl->Length;//右边界为表长

    while (left <= right)
    {/*取中间值mid*/
        mid = (left + right) / 2;
        if (K < Tbl->Data[mid]) right = mid - 1;/*若K小于mid，移动右边界*/
        else if (K > Tbl->Data[mid]) left = mid + 1;
        else return mid;
    }
    return NotFound;
}

int main()
{
    List L;
    MakeEmpty(&L);
    return 0;


}
