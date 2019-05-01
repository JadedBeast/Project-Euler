//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 31/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define oo 1e15
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =720;
int xc[4]={1,0,0,-1};
int yc[4]={0,1,-1,0};
int n,counter=0;
vector<int> adj[MAX*MAX];
//bool used[MAX*MAX];
long long d[MAX*MAX];
int mat[MAX*MAX];

void dijkstra(){

       set<pair<long long, int>> q;
       q.insert({0, 0});

    while (!q.empty()) {
        int v = q.begin()->second;
        q.erase(q.begin());
        for (int to : adj[v]) {
            long long len = mat[to];

            if (d[v] + len < d[to]) {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                q.insert({d[to], to});
                }
            }
        }
}

void addEdge(int x , int y ){
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int main() {
    JadedBeast();
    cin >> n;
    //memset(used,false,sizeof(used));
    int N=n*n;
    for(int i=0 ; i<n ;i++)
        for(int j=0 ; j<n ;j++){
            cin >> mat[i*n+j];
            d[i*n+j]=oo;
            counter++;
            if(j==n-1 )
                addEdge(i*n+j,(i+1)*n+j);
            else
                for(int k=0;k<2 ;k++)
                    if((i+xc[k])*n +j+yc[k]<N && (i+xc[k])*n +j+yc[k]>=0 )
                        addEdge(i*n+j,(i+xc[k])*n+j+yc[k]);
            
        }

        
        d[0]=0;
        dijkstra();

        cout <<mat[0]+d[counter-1];



    return 0;
    
}
