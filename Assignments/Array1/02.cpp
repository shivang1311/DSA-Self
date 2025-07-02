// Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    // input
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]&&arr[i]!=max) smax=arr[i];
    }
    cout<<smax;
    return 0;
}