#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#define N 10
int play(int maze[row][col]){
    int opt;

    printf("going up or down or backward or forward\n");
    printf("4. going backward\n");
    printf("6. going forward\n");
    printf("2. going down\n");
    printf("8. going up\n");

    scanf("%d",&opt);

    switch(opt):

}
int main(){
    int i,j,r,c;
    int block_count=1;
    srand(time(NULL));
    int maze[N][N]  =  {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 1, 1, 1, 0, 1, 0, 1},
        {1, 1, 0, 1, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 1, 1, 1, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
        {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

     for ( i=0;i<N;i++){
        for (j=0;j<N;j++){
            printf(" %d ", maze[i][j]);
        }
        printf("\n");
      }
    printf("enter the row and column no.and 1 is a blocked path\n");

    scanf("%d%d",&r,&c);

    if(maze[r][c]==1){
        printf("it is a blocked path choose the open path(o is a open path) and restart the code again\n");
    }
    else{
        printf("start to play\n");
        for (i=0;i<N;i++){
            for (j=0;j<N;j++){
                if(r==i+1&&c==j+1){
                        printf(" M ");
                }
                else{
                    printf(" %d ",maze[i][j]);
                }
            }
        printf("\n");
        }
    }

    play(maze[r][c]);
}
