#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][20]  = {"h","ha","haa","adadcadahhhh","hhjad"};
    char b = 'c';
    char * a;
    a = (char*)memchr(str[3],b, strlen(str[3]));
    printf("%s",a);
    return 0;
}