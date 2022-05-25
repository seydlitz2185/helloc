#include "stdio.h"
#define N 10

int a[N],i;
int main(int argc, const char* argv[]){
	for(i =0 ; i< N; i++){
		a[i] = i+1;
	}
	a[N]=12345678;	//since i is defined after a[], a[N]will change i
	printf("current i = %d\n",i);
	fprintf(stderr, "baseaddr of a[] =%p\nbound addr of a[] =%p\na[N] = %d\n&a[N] = %p\ni = %d\n&i = %p\nIs there any err?\n",&a,&(a[N-1]),a[N],&a[N],i,&i);
	getchar();
	printf("%d\n",a[i]);//segfault
}

