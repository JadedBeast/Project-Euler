//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 15/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
const int mod= 1e9+7;
const int MAX= 1e5+1;
#define MIN(a,b,c,d) min({a,b,c,d})
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}



int main() {
    JadedBeast();
    long long DP[MAX],penny[8]={1,2,5,10,20,50,100,200};
    memset(DP,0,sizeof(DP));
    DP[0]=1;

    for(int j=0;j<8  ;j++)
            for(int i=penny[j] ;i< MAX ;i++)
                DP[i]=(DP[i]+DP[i-penny[j]])%mod;

          
    int N,T;
    cin >>T;
    while(T--){
        cin >>N;
        cout << DP[N]<<endl;


    }
    return 0;
}
