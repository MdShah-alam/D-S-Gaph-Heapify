#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>  PAIR;
int main()
{
    int k;
    cin>>k;
    vector<vector<int>>allvalue(k);
    for(int i=0;i<k;i++)
    {
        int size_;
        cin>>size_;
        allvalue[i]=vector<int>(size_);
        for(int j=0;j<size_;j++)
        {
            cin>>allvalue[i][j];
        }
    }
    vector<int>indexTracker(k,0);
    priority_queue<PAIR,vector<PAIR>,greater<PAIR>>q;

    for(int i=0;i<k;i++)
    {
        q.push(make_pair(allvalue[i][0],i));
    }
    vector<int>ans;
    while(!q.empty())
    {
        PAIR x=q.top();
        q.pop();
        ans.push_back(x.first);
        if(indexTracker[x.second]+1<allvalue[x.second].size())
        {
            q.push(make_pair(allvalue[x.second][indexTracker[x.second]+1],x.second));
        }
        indexTracker[x.second]+=1;
    }
    for(auto element:ans)
    {
        cout<<element<<"  ";
    }
    cout<<endl;
    return 0;
}

/**
3
3
1 4 7
2
3 5
3
2 6 7
*/
