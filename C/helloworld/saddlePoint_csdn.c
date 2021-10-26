#include <stdio.h>

int main()
{
//    int a[100][100] = {0};
    const int n = 3;
    int row = 0,col = 0;    //鞍点的行 列
//    scanf("%d",&n);
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n;j++){
//            scanf("%d",&a[i][j]);
//        }
//    }
    int  a[n][n] = {{1,4,5},{1,3,6},{0,3,1},};
    //寻找鞍点
    int max,min;
    for(int i = 0; i < n; i++){
        max = a[i][0];
        for(int j = 0; j < n;j++){
            if(a[i][j] > max){
                max = a[i][j];
                col = j;
            }
        }
        min = a[0][col];
        for(int k=0; k < n; k++){
            if( a[k][col] < min ){
                min = a[k][col];
                row = k;
            }
        }
        //当前行的最大值 和 当前列的最小值
        if( min == max ){
            printf("%d %d",row,col);
            break;
        }
    }
    //找不到鞍点 输出NO
    if( min != max ){
        printf("NO");
    }
    return 0;
}