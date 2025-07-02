#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    //input
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN; //max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    cout<<"Maximum value in the array is: "<<max;
    return 0;
}