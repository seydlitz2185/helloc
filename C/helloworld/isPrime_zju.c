#include <stdio.h>
int isPrime (int x);
int main(void)
{
    int x;
    scanf("%d", &x);
    if ( isPrime(x) ) {
        printf("%d is prime", x);
    } else printf("%d isn't prime", x);
    return 0;
}
int isPrime (int x) {
    int ret = 1;
    int i;
    if (x == 1 || (x%2 == 0 && x>2)) {
        ret =0;
    }
    for (i=3; i<x; i+=2) {
        if ( x%i == 0 ) {
            ret = 0;
            break;
        }
    }
    return ret;
}