//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 16/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define time cout << "\ntime: " << (long long)clock() * 1000 / CLOCKS_PER_SEC << " ms" << endl;
const int mod= 1e9+7;
const int MAX=2000*2001+1;
bool primes[MAX];
int N;
//#define MAX(a,b,c) min({a,b,c})
void sieve(){
    fill(primes,primes+MAX,true);
    primes[0]=false,primes[1]=false;
    int rcn=sqrt(MAX);

    for(int i=2;i<=rcn ; i++)
        if(primes[i])
            for(int j=2; j*i <MAX ;j++)
                primes[j*i]=false;
}


inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int checker(int a,int b){
    int k=0,n=0;

    while(n*n+a*n+b>0 && primes[n*n+a*n+b] && n<=N){
        n++;
        k++;
    }
    return k;
}



int main() {
    JadedBeast();
    sieve();
    int maxB,maxA;
    cin >>N;
    int ans=0;
    for(int b=2 ;b<=N;b++)
       if(primes[b])
            for(int a=1 ;a<=N ;a++){
                int x= checker(a,b), y= checker(-a,b);
                if(ans<x){
                    maxA=a;
                    maxB=b;
                    ans=x;
                } 
                if(ans<y){
                    maxA=-a;
                    maxB=b;
                    ans=y;
                }
            }

    cout << maxA << " " <<maxB <<endl;




    return 0;
}
