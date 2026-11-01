#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v= {5,3,1,2,1};
    sort(v.begin(), v.end() );
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    for(auto x:v) cout  <<x << " ";
    return 0;
}