#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#define N 28124
int main(void){
    bool *sieve=(bool *)malloc(N*sizeof(bool));
    sieve[0]=false;
    sieve[1]=false;
    for(int i=2;i<N;i++){
        sieve[i]=true;
    }

    int rcn=sqrt(N);
    for(int i=2;i<=rcn;i++){
        for(int j=2*i;j<N;j+=i){
            sieve[j]=false;
        }
    }

    int *primeFactors=(int *)malloc((N/2)*sizeof(int));
    int count=0;
    for( int i=0;i<N;i++){
        if(sieve[i]){
            primeFactors[count++]=i;
        }
    }

    primeFactors=realloc(primeFactors,count*sizeof(int));
    bool *abundant=(bool *)malloc(N*sizeof(bool));
    for(int i=0;i<12;i++){
        abundant[i]=false;
    }
    for(int i=12;i<N;i++){
        int number=i;
        int sum=1;
        int index=0;
        while(number>1){
            int power=0;
            while(number%primeFactors[index]==0){
                number/=primeFactors[index];
                power++;
            }
            sum*=(pow(primeFactors[index],power+1)-1)/(primeFactors[index]-1);
            index++;
        }
        if(sum>2*i){
            abundant[i]=true;
        }
    }
    int rep,n,i=0;
    scanf("%d",&rep);
    while(i<rep){
    scanf("%d",&n);
    if(n>=N){
        printf("YES\n");
    }else{
    bool flag=false;
        
    for(int j=1;j<n-1;j++){
       
        if(abundant[j] && abundant[n-j]){
            flag=true;
            break;
        }
    }
    printf("%s\n",flag?"YES":"NO");
    }
    i++;
    }
    return 0;
}
