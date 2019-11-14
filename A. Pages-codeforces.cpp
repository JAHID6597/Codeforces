#include<bits/stdc++.h>
using namespace std;
int main()
{
    int np,cp,dp,cnt=0,cn=0;
    cin>>np>>cp>>dp;
    if(np>dp && np>cp && cp>dp && cp-dp>1)
    {
        cout<<"<< ";
        for(int i=cp-dp; i<cp; i++)
        {
            cout<<i<<" ";
        }
        cout<<"("<<cp<<")"<<" ";
        for(int i=1; i<=dp; i++)
        {
            cout<<cp+i<<" ";
            if(cp+i == np)
            {
                cnt++;
                break;
            }
        }
        if(cnt==0)
            cout<<">>"<<endl;
    }
    else if(np==cp && cp!=dp)
    {
        cout<<"<< ";
        for(int i=cp-dp; i<cp; i++)
        {
            cout<<i<<" ";
        }
        cout<<"("<<np<<")"<<endl;
    }
    else if(np==dp && cp != dp)
    {
        for(int i=1; i<=cp; i++)
        {
            if(i==cp)
                cout<<"("<<cp<<")"<<" ";
            else
                cout<<i<<" ";
        }
        for(int i=1; i<=dp-cp; i++)
        {
            cout<<cp+i<<" ";
        }
    }
    else if(np>dp && np>cp && cp<dp)
    {
        for(int i=1; i<=cp; i++)
        {
            if(i==cp)
                cout<<"("<<cp<<")"<<" ";
            else
                cout<<i<<" ";

        }

        for(int i=1; i<=dp; i++)
        {
            cout<<cp+i<<" ";
            if(cp+i == np)
            {
                cn++;
                break;
            }
        }
        if(cn==0)
            cout<<">>"<<endl;
    }
    else if(np>dp && np>cp && cp>=dp)
    {
        for(int i=1; i<=cp; i++)
        {
            if(i==cp)
                cout<<"("<<cp<<")"<<" ";
            else
                cout<<i<<" ";
        }

        for(int i=1; i<=dp; i++)
        {
            cout<<cp+i<<" ";
            if(cp+i == np)
            {
                cn++;
                break;
            }
        }
        if(cn==0)
            cout<<">>"<<endl;
    }
    else if(np>dp && np>cp && cp>dp && cp-dp==1 && cp+dp>=np)
    {
        for(int i=1; i<=cp; i++)
        {
            if(i==cp)
                cout<<"("<<cp<<")"<<" ";
            else
                cout<<i<<" ";
        }

        for(int i=1; i<dp; i++)
        {
            cout<<cp+i<<" ";
        }
    }
    else if(np==cp && cp==dp)
    {
        for(int i=1; i<=cp; i++)
        {
            if(i==cp)
                cout<<"("<<cp<<")"<<" ";
            else
                cout<<i<<" ";
        }
    }
    return 0;
}
