#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,c1=0,c2=0,c3=0,c4=0,v=0;
    cin>>n;
    int a[5]={0,0,0,0,0},i;
    for(i=1; i<=n; i++)
    {
        cin>>v;
        a[v]++;
    }

    c1 = a[1];
    c2 = a[2];
    c3 = a[3];
    c4 = a[4];
s+=c4;
    c4 = 0;

    s = s + (c2/2);
    c2 = c2 % 2;

    if(c1 >= c3)
    {
        s += c3;
        c1 = c1-c3;
        c3=0;
        s+= c1/4;
        c1 = c1%4;
        if(c1 + c2*2 <=4 && c1 + c2*2 >0)
        {
            s++;
            c1 = 0;
            c2 = 0;
        }
        else if(c1 == 3 && c2 == 1)
        {
            s += 2;
            c1 = 0;
            c2 = 0;
        }
    }

    else if(c1<c3)
    {
        if(c1!=0)
        {
            s += c1;
            c3 = c3 - c1;
            c1=0;
            s=s+c3+c2;
        }
        else if(c1==0){
            s=s+c3+c2;
        }
    }else if(c1<c3)
    {
        if(c1!=0)
        {
            s += c1;
            c3 = c3 - c1;
            c1=0;
            s=s+c3+c2;
        }
        else if(c1==0){
            s=s+c3+c2;
        }
    }
    cout<<s;
    return 0;
}
