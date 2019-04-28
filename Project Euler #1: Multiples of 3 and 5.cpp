#include <stdio.h>


int main(void){
    int rep,i=0;
    
    long long  sum,n,a,b,c;
    scanf("%d",&rep);
    while(i<rep){
        sum=0;
        scanf("%lld",&n);
        n=n-1;
        a=n/3;
        sum+=3*a*(a+1)/2;
        c=n/15;
        sum-=15*c*(c+1)/2;
        b=n/5;
        sum+=5*b*(b+1)/2;

        printf("%lld\n",sum);
       i++; 
    }

    
    return 0;
}
