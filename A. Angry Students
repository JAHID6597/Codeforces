#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        char ch[n];
        for(int i=0; i<n; i++)
        {
            cin>>ch[i];
        }
        for(int i=0; i<n; i++)
        {
            if(ch[i]=='A' && ch[i+1]=='P')
            {
                for(int j=i; j<n; j++)
                {
                    if(ch[j]=='A' && ch[j+1]=='P')
                    {
                        ch[j+1]='A';
                        j++;
                    }
                }
                c++;
            }


        }
        cout<<c<<endl;
    }
    return 0;
}

