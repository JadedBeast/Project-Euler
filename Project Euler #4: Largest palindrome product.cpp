#include <stdio.h>
#include <stdbool.h>
//prototypes
int previousPalin(int n);
bool checkIfThreeDigits(int n);
//main
int main(void){
    int n,repetitions,i;
    scanf("%d",&repetitions);
    
    while(i<repetitions){
    scanf("%d",&n);
    n=previousPalin(n);
    printf("%d\n",n);
    i++;
    }
   
    return 0;
}

//functions
int previousPalin(int x){

    int palin1=x/1000;
    int first=palin1/100;
    int second=((palin1/10)%10)*10;
    int third=palin1%(palin1/10);
    palin1=palin1*1000+third*100+second+first;
    if(palin1>=x || !checkIfThreeDigits(palin1)){
        int palin2 =x/1000;
        palin2--;
        palin2*=1000;
        palin2+=999;
        return previousPalin(palin2);
        }
    return palin1;
    }
bool checkIfThreeDigits(int n){
    int counter=0;
    for (int i=999;i>99;i--){
        if(n%i==0 && ((n/i)>99 && (n/i)<1000)){
            counter++;
            }
        if(counter==2){
            return true;
            }
        }
        return false;
    }
