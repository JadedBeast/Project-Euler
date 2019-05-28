#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N=2000001;
    int *sieve=(int *)malloc(N*sizeof(int));
    sieve[0]=0,sieve[1]=0;
    for(int i=2; i<N ;i++){
        sieve[i]=0;  
    }
 
    for(int i=2;i<N;i++){   
        if(!sieve[i])
        for(int j=i;j<N;j+=i){
            sieve[j]++;
        }
    }
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=14;i<=n;i++){
        switch(k){
            case 2: if(sieve[i]==2 &&sieve[i]==sieve[i+1]){
                      printf("%d\n",i);
                      
                    }break;
            case 3:if(sieve[i]==3 && sieve[i]==sieve[i+1] && sieve[i]==sieve[i+2]){
                      printf("%d\n",i);
                    }break;
            case 4 :if(sieve[i]==4 && sieve[i]==sieve[i+1] && sieve[i]==sieve[i+2] && sieve[i]==sieve[i+3]){
                      printf("%d\n",i);  
                    }break;
        }
    }
    
   return 0;
}
