#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>x;
    bool flag = false; // check mark flag
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<x<<" is present in the array.";
    else cout<<x<<" is not present in the array.";
    return 0;
}