#include<bits/stdc++.h>
using namespace std;

class Priority_queue
{
private:
    vector<int>v;
    int leftChild(int i)
    {
        return (i*2)+1;
    }
    int rightChild(int i)
    {
        return (i*2)+2;
    }
    int parent(int i)
    {
        return (i-1)/2;
    }
    void heapify(int strt)
    {
        int left_index=leftChild(strt);
        int right_index=rightChild(strt);
        int smallest=strt;

        if(left_index<v.size() && v[left_index]<v[smallest]){
            smallest=left_index;
        }
        if((right_index<v.size()) && (v[right_index]<v[smallest])){
            smallest=right_index;
        }

        swap(v[strt],v[smallest]);
        if(smallest!=strt){
            heapify(smallest);
        }
    }
public:
    void Push(int val)
    {
        v.push_back(val);
        int ami=v.size()-1;
        if(ami==0)
            return ;

        while(v[ami] < v[parent(ami)]){
            swap(v[ami],v[parent(ami)]);
            ami=parent(ami);
        }
    }
    int Top()
    {
        return v[0];
    }
    void Pop()
    {
        v[0]=v[v.size()-1];
        v.pop_back();
        heapify(0);
    }
    bool Empty()
    {
        return v.size()==0;
    }
};

int main()
{
    Priority_queue pq;
    pq.Push(5);
    pq.Push(10);
    pq.Push(1);
    pq.Push(3);
    pq.Push(15);

    while(!pq.Empty()){
        int v=pq.Top();
        pq.Pop();
        cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}
