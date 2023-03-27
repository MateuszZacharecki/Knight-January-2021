#include <stdio.h>
#include <stdlib.h>

#define N 8
int h[N][N], a[8], b[8];

void print(int g[][N])
{
    int i,j;
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
        printf("%d ",g[i][j]);
        }
        printf("\n");
    }
}
int jump(int x, int y, int counter){

    int pos_x, pos_y;
    counter +=1;
    h[x][y] = counter;
    if (counter == N*N)
        return 1;
    for(int i=0;i<8;i++){
            pos_x= x + a[i];
            pos_y= y + b[i];
        if(pos_x >= 0 && pos_x < N && pos_y >= 0 && pos_y < N && h[pos_x][pos_y]==0){
            if(jump(pos_x,pos_y,counter))
            {
                return 1;
            }
        }
    }
    h[x][y] = 0;
    return 0;


}

int main()
{
    a[0]=2; b[0]=1;
    a[1]=1; b[1]=2;
    a[2]=-1; b[2]=2;
    a[3]=-2; b[3]=1;
    a[4]=-2; b[4]=-1;
    a[5]=-1; b[5]=-2;
    a[6]=1; b[6]=-2;
    a[7]=2; b[7]=-1;
    int i,j;
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
        h[i][j]=0;
        }
    }
    h[0][0]=1;
    if (jump(0,0,0)) print(h);
    else printf("There is no solution!");
    return 0;
}
