#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto i:m)
    {
        cout<<i.first<<" = "<<i.second<<endl;
    }
    return 0;
}
/**

10
2 1 2 0 3 500000 0 5 8 9

*/
