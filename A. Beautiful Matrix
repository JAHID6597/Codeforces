#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6],i,j,p,q;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(a[i][j]==1)
            {
                p=i;
                q=j;
                break;
            }
        }
    }
    if(p!=3 || q!=3)
    {
        cout<<(abs(p-3))+(abs(q-3));
    }
    else if(p==3 && q==3)
    {
        cout<<0;
    }
    return 0;
}
