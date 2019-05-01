#include <stdio.h>
#define N 20

int main(void){
    int m[N][N];
    for (int i =0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&m[i][j]);
        }
    }
    int maxColumn=-1,maxLine=-1,maxRight=-1,maxLeft=-1,max;
    for (int i=0;i<N-3;i++){
        for(int j=0;j<N;j++){
            int testC=m[i][j]*m[i+1][j]*m[i+2][j]*m[i+3][j];
            if(testC>maxColumn){
                maxColumn=testC;
            }
            int testL=m[j][i]*m[j][i+1]*m[j][i+2]*m[j][i+3];
            if(testL>maxLine){
                maxLine=testL;
            }
        }
    }
    for (int i=0;i<N-3;i++){
        for(int j=0;j<N-3;j++){
        int testRight=m[j][i]*m[j+1][i+1]*m[j+2][i+2]*m[j+3][i+3];
        if(testRight>maxRight){
            maxRight=testRight;
        }
        int testLeft=m[N-1-j][i]*m[N-2-j][i+1]*m[N-3-j][i+2]*m[N-4-j][i+3];
        if(testLeft>maxLeft){
            maxLeft=testLeft;
            }
        }
    }

    max=(maxColumn>maxLine)?maxColumn:maxLine;
    max=(maxLeft>max)?maxLeft:max;
    max=(maxRight>max)?maxRight:max;
    printf("%d",max);
    return 0;
}
