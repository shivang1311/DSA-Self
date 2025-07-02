// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
    }
    if(flag) cout<<"Duplicates are present.";
    else cout<<"No duplicates are their.";
    return 0;
}