#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    cout<<arr<<endl; // prints address of first element first byte
    cout<<&arr<<endl; // array ka address hota hai first element ki first byte ka address
    cout<<&arr[0]<<endl; // same as above
    cout<<&arr[1]<<endl; // address of second element
    cout<<&arr[2]<<endl; // address of third element
    cout<<&arr[3]<<endl; // address of fourth element
//  0x61ff00
//  0x61ff04
//  0x61ff08
//  0x61ff0c
    return 0;
}