#include<bits/stdc++.h>
using namespace std;

vector<int> v[100];
bool visit[100];

int bfs(int src)
{
    int k;
    queue<pair<int,int>>q;
    q.push({src,0});
    while(!q.empty())
    {
        pair<int,int> parent=q.front();
        q.pop();
        if(visit[parent.first]==true) continue;
//        if(parent.second==a)
       // cout<<parent.first<<"   "/**<<"  "<<parent.second<<endl*/;
        for(int i=0;i<v[parent.first].size();i++)
        {
            int child=v[parent.first][i];
            if(visit[child]==false)
            q.push({child,parent.second+1});
            k++;
        }
        visit[parent.first]=true;
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        //v[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    cout<<endl;
//    int a;
//    cin>>a;
    cout<<bfs(2);
    return 0;
}
/**

6 7
5 3
4 5
1 0
1 2
1 3
3 0
4 3

7 10
0 1
0 2
0 5
1 3
2 3
3 6
6 5
6 4
5 4
2 5



6 5
0 1
0 2
0 3
2 3
4 5

*/
