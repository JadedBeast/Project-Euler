#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    long long n;

    cin >>t;
    while(t--){
        cin>> n;
        long long x=n*(n+1)/2;
        long long y=n*(n+1)*(2*n+1)/6;
        cout <<x*x-y<<endl;
    }
    
}
