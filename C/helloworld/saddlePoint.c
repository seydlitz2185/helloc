//对于二维数组，鞍点指的是在一行中最大，且在这一列中最小的元素，鞍点并不总是存在,若存在至多只有一个
#include "stdio.h"
#define width 3
#define height 3
#define DEFAULT -32767
int main (void ){
    int saddlePoint = DEFAULT;
    const int  num[height][width] = {{1,4,5},{1,3,6},{0,3,1},};
    for(int i = 0; i<height;i++){
        for(int j = 0;j<width;j++){
            saddlePoint = num[i][j];
            for(int k = 0; k<width;k++){
                if (num[i][j] >= num[i][k]) {
                    continue;
                } else{
                    saddlePoint = num[i][k];
                    break;
                }
            }
            if(saddlePoint == num[i][j]){
                for (int k = 0; k < height; k++) {
                    if(num[i][j] <= num[k][j]){
                        continue;
                    } else{
                        saddlePoint = num[k][j];
                        break;
                    }
                }
                if(saddlePoint == num[i][j]){
                    printf("saddle point is num[%d][%d],which value is %d\n",i,j,saddlePoint);
                    return 0;
                }
            }
            if((i== height-1) && (j== width-1) && saddlePoint != num[i][j]){
                printf("No saddle point at all\n");
                return 0;
            }
        }
    }
}


