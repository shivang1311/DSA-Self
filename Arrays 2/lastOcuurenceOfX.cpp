#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    int x = 1;
    int index = -1;
    for(int i=v.size()-1; i>=0; i--) // backward loop more time efficient
    {
        if(v[i]==x)
        {
            index = i;
            break;
        }
    }
    cout<<index;
    return 0;
}