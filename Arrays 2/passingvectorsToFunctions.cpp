#include<iostream>
#include<vector>
using namespace std;
// by default vector passed by value in c++ in functions unlike array
void change(vector<int> &a) // ampercent (&) operator ke thorught pass by refrence jata hai vector
{
    a[0]=100;
}
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
} 