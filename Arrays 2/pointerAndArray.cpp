#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,4,2};
    int* ptr = arr; // giving address of the array;
    int* ptr1 = &arr[0]; // array ki 1st element ka address as same as above
    cout<<ptr<<endl;
    cout<<ptr[0];

    *ptr = 8; // ptr[0]=8
    ptr++; // ptr is now pointing to 2nd element
    *ptr = 9; // ptr[1]=9;
    ptr--; // ptr is now pointing to 1st element
    return 0;
}