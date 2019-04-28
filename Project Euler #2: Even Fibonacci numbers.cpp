#include <stdio.h>

int main(void){

    int t ;
    long long sum ,f0,f1,z,n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        f0 = 1,f1=1;
        sum = 0,z=0;

        while (z<n) {
            z = f0+f1;
            if (z%2==0 && z<n)
                sum+= z;

            f0 = f1;
            f1 = z;
        }
    printf("%lld\n",sum);
    }
    return 0;
}

