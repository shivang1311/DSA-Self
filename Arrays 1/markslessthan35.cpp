#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter no of students: ";
    cin>>size;
    int marks[size];
    //input
    cout<<"Enter marks of students: ";
    for(int i=0;i<size;i++)
    {
        cin>>marks[i];
    }
    // output
    cout<<"Roll no of students who's marks are less than 35: ";
    for(int i=0; i<size; i++)
    {
        if(marks[i]<35) cout<<i<<" ";
    }
    return 0;
}