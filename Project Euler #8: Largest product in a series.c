#include <stdio.h>
#include <stdlib.h>


int main(){
    int repetitions; 
    char* num = (char *)malloc(2 * sizeof(char));
    scanf("%d",&repetitions);
    for(int i = 0; i < repetitions; i++){
        int n; 
        int k; 
        int max =0;
        scanf("%d %d",&n,&k);
        num = realloc(num,n * sizeof(char));
        scanf("%s",num);
        for(int j=0;j<n;j++){
            int mul=1;
            for(int z=j;z<k+j && k+j<n;z++){
                mul*=(num[z]-48);
            }
            if(mul>max && k+j<n){
                max=mul;
            }
            
        }
        printf("%d\n",max);
        
    }
    //free(num);
    return 0;
}
