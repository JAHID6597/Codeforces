#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,c=0,i;
    cin>>n>>k;
    int a[n];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    t = a[k];
    if(t==0)
    {
        for(i=1; i<=n; i++)
        {
            if(t<a[i])
            {
                c++;
            }
        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(a[i]>=t)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
