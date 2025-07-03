#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the target number: ";
    cin>>x;
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
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]+v[j]==x)
            {
                cout<<"("<<i<<","<<j<<")";
                cout<<endl;
            }
        }
    }
}