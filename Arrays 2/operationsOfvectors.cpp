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
    // deleting the element
    v.pop_back(); // remove the last element , 10 is deleted
    return 0;
}