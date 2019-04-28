#include <bits/stdc++.h>
using namespace std;

const int MAX=1e6;

vector<int> v;
bool prime[MAX];
void sieve(){
    memset(prime,true,sizeof(prime));
    for(int i=2;i<=MAX/2;i++)
        if(prime[i]){
            v.push_back(i);
            for(int j=2;i*j<MAX;j++)
                prime[i*j]=false;
        }

}
int main(void){
    int t,n;    
    sieve();
    cin >>t;
    while(t--){
        cin>> n;
        cout<<v[n-1]<<endl;

    }
    
}
