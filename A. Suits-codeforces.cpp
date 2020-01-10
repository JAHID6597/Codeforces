#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,type1,type2,x1,x2,y1,y2;
    cin>>a>>b>>c>>d>>e>>f;
    x1 = min(a,d);
    x2 = min(b,min(d-x1,c));
    type1 = x1*e + x2*f;
    y1 = min(b,min(d,c));
    y2 = min(a,d-y1);
    type2 = y1*f + y2*e;
    cout<<max(type1,type2)<<endl;
    return 0;
}
