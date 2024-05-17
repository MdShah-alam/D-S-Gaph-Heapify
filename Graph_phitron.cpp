#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool visited[100];

void bfs(int src)
{
    queue<pair<int,int>>q;
    q.push({src,0});

    while(!q.empty()){
        pair<int,int> parent = q.front();
        q.pop();
        if(visited[parent.first]==true) continue;
        cout<<"value = "<<parent.first<<" level = "<<parent.second<<endl;

        for(int i=0;i<v[parent.first].size();i++){
            int childern = v[parent.first][i];
            if(visited[childern] == false) q.push({childern,parent.second+1});
        }
        visited[parent.first]=true;
    }
}

void dfs(int src)
{
    cout<<src<<" ";
    visited[src]=true;

    for(int i=0;i<v[src].size();i++){
        int childern = v[src][i];
        if(visited[childern]==false)
            dfs(childern);
    }
}

int main()
{
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=0;i<100;i++)
        visited[i]=false;

    cout<<endl;
//    bfs(1);
    dfs(1);
    cout<<endl;

    return 0;
}
/**
for bfs
6 7

5 3
4 5
1 0
1 2
1 3
3 0
4 3

for dfs

7 7

1 2
1 6
2 3
2 4
6 4
6 7
4 5

*/
