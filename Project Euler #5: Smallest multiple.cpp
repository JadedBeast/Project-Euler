#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
	int t;
	ll n,ans=1;


	cin >>t;
	while(t--){
		ans=1;
		cin>> n;
		for(ll i=1;i<=n;i++)
			ans=i*(ans/__gcd(ans,i));

		cout <<ans<<endl;
	}
	

}
