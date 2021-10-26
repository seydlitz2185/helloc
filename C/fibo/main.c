//
// Created by Steven Yu on 2021/3/13.
//

//
// Created by Steven Yu on 2021/3/13.
//
#include <stdio.h>
int  num = 0;
int Fib (int n)
{
    num++;
    if(n <= 2)
    {
        return 1;
    } else {
        return Fib(n - 1) + Fib(n - 2);
    }

}

int main()
{
    int i = 0;
    scanf("%d",&i);
    printf("value of Fib: %d\n",Fib(i));
    printf("value of num: %d\n",num);
    return 0;

}
