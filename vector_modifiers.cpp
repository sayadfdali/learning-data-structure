#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1,2,3,100,5,2};
    // vector<int> v2 = {100,200,300};
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    auto it = find(v.begin(),v.end(),100);

    if(it==v.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }

    // for(int x : v)
    // {
    //     cout<< x << " ";
    // }
    return 0;
}