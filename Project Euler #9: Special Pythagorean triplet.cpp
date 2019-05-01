#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    int N ,rep,max,i=0;
    scanf("%d",&rep);
    while(i<rep){
        scanf("%d",&N);
        if(N%2!=0){
            printf("-1\n");
        }else{
            int a,b=2,c=3;
            bool flag =false;
            for( a=1;a<N/3 && a<b && b<c; a++){
                b=((int) pow(N,2)-2*a*N)/(2*(N-a));
                c=N-(a+b);
                if((int) pow(a,2)+(int)pow(b,2)==(int)pow(c,2)){
                    flag=true;
                    max=a*b*c;
                }
            }
                if(flag){
                    printf("%d\n",max);
                }else{
                    printf("-1\n");
                }
            }
            
        
        i++;
    }
    
    return 0;
}
