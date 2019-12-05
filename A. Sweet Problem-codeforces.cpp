#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,g,b,c=0,p;
    int a[3];
    cin>>t;
    while(t--)
    {
        cin>>r>>g>>b;
        a[0]=r;
        a[1]=g;
        a[2]=b;
        sort(a,a+3);
        if(a[0]+a[1] >= a[2])
        {
            cout<<(a[0]+a[1]+a[2])/2<<endl;
        }
        else if(a[0]+a[1] < a[2])
        {
            cout<<a[0]+a[1]<<endl;
        }
    }
    return 0;
}
