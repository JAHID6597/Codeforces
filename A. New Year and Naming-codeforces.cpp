#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> vs1;
    vector<string> vs2;
    string s1,s2;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>s1;
        vs1.push_back(s1);
    }
    for(int i=0; i<m; i++)
    {
        cin>>s2;
        vs2.push_back(s2);
    }
    int q,e;
    cin>>q;
    vector<int> v;
    for(int i=0; i<q; i++)
    {
        cin>>e;
        v.push_back(e);
    }
    for(int i=0; i<q; i++)
    {
        int w,chk1,chk2;
        w = v[i]-1;
        if(w==n && w==m)
        {
            cout<<vs1[n]+vs2[m]<<endl;
        }
        else
        {
            if(w<=n && w<=m)
            {
                chk1 = w%n;
                chk2 = w%m;
                cout<<vs1[chk1]+vs2[chk2]<<endl;
            }
            else if(w>n && w>m)
            {
                chk1 = w%n;
                chk2 = w%m;
                cout<<vs1[chk1]+vs2[chk2]<<endl;
            }
            else if(w<=n && w>m)
            {
                chk1 = w%n;
                chk2 = w%m;
                cout<<vs1[chk1]+vs2[chk2]<<endl;
            }
            else if(w>n && w<=m)
            {
                chk1 = w%n;
                chk2 = w%m;
                cout<<vs1[chk1]+vs2[chk2]<<endl;
            }

        }
    }
}

