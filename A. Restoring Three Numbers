#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,mx;
    vector<int> vec;
    for(i=1;i<=4;i++){
       cin>>x;
       vec.push_back(x);
    }
    sort(vec.begin(),vec.end(),greater<int>());
    mx = vec[0];
    sort(vec.begin(),vec.end());
    vec.pop_back();
    for(i = 0 ; i < 3 ; i++){
       cout<<mx-vec[i]<<" ";
    }
    return 0;
}
