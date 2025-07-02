#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    cout<<v.at(2); // Output: 1 , index 2; simiar v[2]; 
    v.at(3)=90; // This will update the value of third index
    sort(v.begin(),v.end());
    return 0;
}