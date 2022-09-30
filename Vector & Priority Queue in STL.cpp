#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>  PAIR;

int main()
{
    vector<int>v(3,-1);

    vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<endl;
    v.push_back(5);
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<endl;

    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl<<endl;
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl<<endl;

    priority_queue<int,vector<int>,greater<int >>p;
    p.push(1);
    p.push(4);
    p.push(7);

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl<<endl;

    priority_queue<PAIR,vector<PAIR>>q;
    q.push(make_pair(1,2));
    q.push(make_pair(3,4));
    q.push(make_pair(5,6));

    while(!q.empty())
    {
        cout<<q.top().first<<" | "<<q.top().second<<endl;
        q.pop();
    }
    cout<<endl<<endl;


    return 0;
}
