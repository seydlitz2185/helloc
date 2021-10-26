#include<stdio.h>
int main()
{
    int a,b,c,d,bowl;

    printf("请输入4个整数：\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b) {
        bowl=a;
        a=b;
        b=bowl;
    }

    if(a>c){
        bowl=a;
        a=c;
        c=bowl;
    }

    if(a>d){
        bowl=a;
        a=d;
        d=bowl;
    }

    if(b>c){
        bowl=b;
        b=c;
        c=bowl;
    }

    if(b>d){
        bowl=b;
        b=d;
        d=bowl;
    }

    if(c>d){
        bowl=c;
        c=d;
        d=bowl;
    }


    printf("四个数从小到大排列为：%d %d %d %d",a,b,c,d);


    return 0;
}