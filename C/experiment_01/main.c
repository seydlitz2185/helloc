//实验书 实验二 P284-P286
#include <stdio.h>
#include "math.h"
void exp_01()
{
    char c1,c2;
    c1 = 97;
    c2 = 98;
    printf("%c %c\n",c1,c2);
    printf("%d %d\n",c1,c2);
}
void exp_02()
{
    int a,b;
    float x,y;
    char c1,c2;
    scanf("a=%d b=%d",&a,&b);
    scanf("%f %e",&x,&y);
    scanf("%c %c",&c1,&c2);
    printf("%d %d\n",a,b);
    printf("%f %e\n",x,y);
    printf("%c%c",c1,c2);
}

void exp_04()
{
    double i = 1.0,j = 0.09;
    double k;
    k = pow(i+j,10);
    printf("十年后的国民生产总值为%f\n", k );
    //i代表今年的国民生产总值，为1
    //j是年增长率为9%
}

int main() {
    //exp_01();
    exp_02();
    //exp_04();
    return 0;

}
