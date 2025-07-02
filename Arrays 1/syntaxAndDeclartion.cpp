#include<iostream>
using namespace std;
int main()
{
    int arr[7]; // 7 is the size of the array
    arr[0] = 10; // assigning value to the first element and initalization
    arr[1] = 20; // assigning value to the second element
    int a[10] = {1,2,3,4,5,6,7,8,9,10}; // another way of initialization
    // input
    for(int i=0; i<7; i++)
    {
        cin>>arr[i];
    }
    // output
    for(int i=0;i<7; i++)
    {
        cout<<arr[i]<<" ";
    } 
    return 0;
}