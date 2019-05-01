//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 22/4/2019

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
const int mod= 1e9+7;
const int MAX=2500;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
vector <ll> v;
bool primes[MAX];
ll lcm(ll a, ll b){
    return (a/__gcd(a,b))*b;
}
void sieve(){
    v.push_back(1);
    memset(primes,true,sizeof(primes));
    for(int i=2;i*i<=MAX;i++)
        if(primes[i]){
            auto it=v.end();
            ll damn=lcm(*(--it),i);
            if(damn>2e18)
                break;
            v.push_back(damn);
            for(int j=2;i*j<=MAX;j++)
                primes[i*j]=false;
        }

}



int main() {
    JadedBeast();
    sieve();
    sort(v.begin(),v.end());
    v.push_back(2e18);
    int t;
    ll n;
    cin >>t;
    while(t--){
        cin >> n;
        auto it= lower_bound(v.begin(),v.end(),n);
        while(*it>=n)
            --it;
            
        cout <<*(it)<<endl;
    }


    return 0;
}
