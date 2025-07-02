#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0; // counter
    int x;
    cout<<"Enter element x: ";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x) count++;
    }
    cout<<"Their are "<<count<<" elements greater than "<<x;
    return 0;
}