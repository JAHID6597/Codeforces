#include<bits/stdc++.h>
using namespace std;
int main()
{
    char p[101];
    int i,c0=0,c1=0;
    cin>>p;
    for(i=0; p[i]!='\0'; i++)
    {
        if(p[i]=='0')
        {
            c0++;
            c1=0;
            if(c0==7)
                break;
        }
        else if(p[i]=='1')
        {
            c1++;
            c0=0;
            if(c1==7)
                break;
        }
    }
    if(c0>=7 || c1>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
