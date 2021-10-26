#include <stdio.h>
#include <math.h>
int main() {
    int i;
    float j;
    scanf("%d",&i);
    if (i >0 && i<1000)
        j = sqrt(i);
    else{
        scanf("%d", &i);
        j = sqrt(i);
    }
    printf(" %f\n",j);
    printf(" %.0f",j);
    return 0;
}
