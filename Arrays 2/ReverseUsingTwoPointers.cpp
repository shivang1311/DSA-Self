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
    // reverse using two pointers
    int j = v.size()-1;
    int i = 0;
    while(i<j)
    { 
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;

    }
    // reverse using for loop two pointers initlization
    for(int i=0,j=v.size()-1;i<j;i++,j--)
    {
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    // reverse(v.begin(),v.end()) //built in fuction of vector for reversing
    display(v);
}