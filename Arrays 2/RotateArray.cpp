#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(vector<int> &v, int i, int j)
{
    while(i<j)
    {
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter vector size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"Enter k: ";
    cin>>k;
    if(k>n) k=k%n;
    display(v);
    reversePart(v,0,n-k-1);
    reversePart(v,n-k,n-1);
    reversePart(v,0,n-1);
    display(v);
}

// leetcode rotate array