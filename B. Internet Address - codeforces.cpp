#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int len,p,i,x=0;
    cin>>s;
    len=s.length();
    if(s[0]=='h')
    {
        for(i=0; i<len; i++)
        {
            if(i==0 && s[i]=='h' && s[i+1]=='t' && s[i+2]=='t' && s[i+3]=='p')
            {
                i=i+3;
                cout<<"http://";
            }
            else if(i>4 && s[i]=='r' && s[i+1]=='u' && x==0)
            {
                cout<<".ru";
                x++;
                i++;
            }
            else
            {
                if(x==1)
                {
                    cout<<"/";
                    x++;
                }
                cout<<s[i];
            }
        }
    }

    else if(s[0]=='f')
    {
        for(i=0; i<len; i++)
        {
            if(i==0 && s[i]=='f' && s[i+1]=='t' && s[i+2]=='p')
            {
                i=i+2;
                cout<<"ftp://";
            }
            else if(i>3 && s[i]=='r' && s[i+1]=='u' && x==0)
            {
                cout<<".ru";
                x++;
                i++;
            }
            else
            {
                if(x==1)
                {
                    cout<<"/";
                    x++;
                }
                cout<<s[i];
            }
        }
    }
    return 0;
}
