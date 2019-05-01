//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 15/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
const int mod= 1e9+7;

inline void Boost() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

long long M[1001][1001];
long long DP[1001][1001];
int N;

long long dp(int i,int j){
    if(i==N && j==N)
        return M[N][N];
    if(i>N || j>N )
        return  696969696969696;
    if(DP[i][j]!=-1)
        return DP[i][j];

    return DP[i][j]=M[i][j]+min(dp(i+1,j),dp(i,j+1));
}

int main() {
    Boost();
    memset(DP,-1,sizeof(DP));

    cin >>N;
    
    for (int i =1; i <=N; ++i)
        for (int j = 1; j <= N; j++)
            cin >>M[i][j];
    
    cout <<dp(1,1)<<endl;

    return 0;
}
