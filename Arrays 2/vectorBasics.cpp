#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; // declaration , you need not mention the size
    // inserting elements , do not use []
    v.push_back(9);
    v.push_back(8);
    v.push_back(10);  
    // if you want to update /access
    v[0]=88;
    return 0;
}