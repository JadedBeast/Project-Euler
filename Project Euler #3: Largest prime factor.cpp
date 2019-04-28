#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(void){
    int t;
    ll n,arr[]={2,3,5};


    cin >>t;
    while(t--){
        cin>> n;
        for(int i=0;i<3;i++)
            while(n%arr[i]==0){
                n/=arr[i];
                if(n==1){n=arr[i];break;}
            }
            
        for(ll  i=7 ;i<=sqrt(n);i+=2){
            while(n%i==0)
                n/=i;
            }

        cout <<n<<endl;

    }
    

}
