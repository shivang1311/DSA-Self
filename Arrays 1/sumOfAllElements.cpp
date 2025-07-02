#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum: "<<sum;
}