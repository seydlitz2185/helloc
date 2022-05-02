//
//  main.c
//  BuddySystem
//
//  Created by Steven Yu on 2022/5/2.
//

#include <stdio.h>
#include <stdlib.h>

#define U 20
int* list[U];
int* hole;

void get_hole(int i){
    if ( i == (U)){return;}
    if(list[i]==NULL){
        get_hole(i+1);
        list[U-i] = malloc(sizeof(int)*2);
        list[U-i][0]=list[U-i][1] = i;
        list[U-i-1][0]= -1;
        hole = realloc(hole, sizeof(hole)+1);
        hole[U-i] = i;
    }
    hole[0]--;
}

void allocate(int s, int u){
    int i = u;
    while (s< (1<<(i--)));
    get_hole(i+1);
    for (int i = 0; list[i] != NULL; i++) {
        //printf("%d, %d\n",list[i][0],list[i][1]);
        printf("%d\n",hole[i]);
    }
}

int main(int argc, const char * argv[]) {
    int u = U;
    list[0] = malloc(sizeof(int));
    list[0][0] = U;
    hole= malloc(sizeof(int));
    hole[0] = 20;
    allocate(512, u);
    return 0;
}
