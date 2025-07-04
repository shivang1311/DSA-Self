#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// using two pass method
void sort0and1(vector<int> & v)
{
    int zero = 0;
    int ones = 0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0) zero++;
        else ones++;
    }
    // filling elements
    for(int i=0;i<v.size();i++)
    {
        if(i<zero) v[i]=0;
        else v[i]=1;
    }
}
// using two pointers method
void sortzeroesAndOnes(vector<int>& v)
{
    int i=0;
    int j=v.size()-1;
    while(i<j)
    {
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(v[i]==1 && v[j]==0 && (i<j))
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    sortzeroesAndOnes(v);
    display(v);
    return 0;
}