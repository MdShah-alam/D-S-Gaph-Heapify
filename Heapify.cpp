#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void  heapify(int arr[],int n,int curr)
{
    int largest=curr;
    int left=(curr*2)+1;
    int right=(curr*2)+2;

    if(left<n && arr[left]<arr[largest])
    {
        largest=left;
    }
    if(right<n && arr[right]<arr[largest])
    {
        largest=right;
    }
    if(largest!=curr)
    {
        swap(&arr[curr],&arr[largest]);
        heapify(arr,n,largest);
    }
}

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapsort(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        print_array(arr,n);
        heapify(arr,i,0);

        print_array(arr,n);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before heapify ."<<endl;
    print_array(arr,n);

    // Heaping
    int nonheapleaf=(n/2)-1;

    for(int i=nonheapleaf;i>=0;i--)
    {
         heapify(arr,n,i);
    }
    cout<<"After heapify ."<<endl;
    print_array(arr,n);

    heapsort(arr,n);

    cout<<"After heapsort . "<<endl;
    print_array(arr,n);

    return 0;
}

/**

9
2 10 1 5 4 8 3 8 7

6
2 5 9 1 7 3

6
20 50 40 5 30 15

*/
