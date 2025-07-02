#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,6,7,4,3,4,535,23,232};
    int n = sizeof(arr)/sizeof(arr[0]);
    int size1 = sizeof(arr[0]); // tells how many bytes first elment have occupied
    int arrs = sizeof(arr); // tell total how many bytes array have ocupied
    cout<<n;
}