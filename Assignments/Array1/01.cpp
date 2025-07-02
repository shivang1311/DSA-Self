// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    // input
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int product = 1;
    for(int i=0;i<n;i++)
    {
        product*=arr[i];
    }
    cout<<"Product of the array: "<<product;
    return 0;
}