#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

void print(Node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<"  ";
    print(root->left);
    print(root->right);
}

void vertical(Node *root,int d,map<int,vector<int>>&m)
{
    if(root==NULL)
        return ;
    m[d].push_back(root->data);
    vertical(root->left,d-1,m);
    vertical(root->right,d+1,m);
}

int main()
{
    int n;
    cin>>n;
    Node *root=new Node(n);
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node *present=q.front();
        q.pop();
        int x,y;
        cin>>x>>y;
        Node *n1=NULL;
        Node *n2=NULL;
        if(x!=-1)
            n1=new Node(x);
        if(y!=-1)
            n2=new Node(y);
        present->left=n1;
        present->right=n2;
        if(n1!=NULL)
            q.push(n1);
        if(n2!=NULL)
            q.push(n2);
    }
    cout<<endl;
    print(root);
    cout<<endl;

    map<int,vector<int>>m;

    vertical(root,0,m);
    for(auto i:m)
    {
        cout<<i.first<<" : ";
        for(int j=0;j<(i.second).size();j++)
        {
            cout<<(i.second)[j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}

/**

6
3 8
2 5 8 1
-1 7 -1 -1 -1 3 -1 -1
-1 -1 -1 -1

*/
