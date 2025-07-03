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
    display(v);
    vector<int> res;
    for(int i=n-1;i>=0;i--)
    {
        res.push_back(v[i]);
    }
    display(res);
}