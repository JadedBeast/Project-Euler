//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 11/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
const int mod= 1e9+7;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
int T,N,m[101][101],DP[101][101];
int dp(int i , int j){
    if(i>N || j>N || i<0 || j<0)
        return 0; 
    if(DP[i][j]!=-1)
        return DP[i][j];
    
    return DP[i][j]=m[i][j]+max(dp(i+1,j),dp(i+1,j+1));
    
}


int main(void){
    JadedBeast();
    cin >> T;
    for(int i=0 ;i<T ;i++){
        memset(DP,-1,sizeof(DP));
        memset(m,0,sizeof(m));
        cin >> N;
        for(int j=0;j<N;j++){
            for(int k=0 ; k<=j ;k++){
                cin >>m[j][k];
            }
        }
        cout << dp(0,0)<<endl;
        
        
    }    
    
    return 0;
}
