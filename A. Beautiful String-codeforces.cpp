#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin.ignore();
        cin>>s;
        int len,i,p=0;
        len=s.length();
        if(len==1)
            s="a";
        for(i=0; i<len; i++)
        {
            if(s[i]==s[i+1] && s[i]>='a' && s[i]<='c')
            {
                p=1;
                break;
            }
            else if(s[i]=='?')
            {
                if(i==0 && s[i+1]=='?')
                    s[i]='a';

                else if(i==0 && s[i+1]=='a')
                    s[i]='b';
                else if(i==0 && s[i+1]=='b')
                    s[i]='a';

                else if(i==0 && s[i+1]=='b')
                    s[i]='c';
                else if(i==0 && s[i+1]=='c')
                    s[i]='b';

                else if(i==0 && s[i+1]=='c')
                    s[i]='a';
                else if(i==0 && s[i+1]=='a')
                    s[i]='c';

                else if(i>0 && s[i-1]=='a' && s[i+1]=='b')
                    s[i]='c';
                else if(i>0 && s[i-1]=='b' && s[i+1]=='a')
                    s[i]='c';

                else if(i>0 && s[i-1]=='b' && s[i+1]=='c')
                    s[i]='a';
                else if(i>0 && s[i-1]=='c' && s[i+1]=='b')
                    s[i]='a';

                else if(i>0 && s[i-1]=='a' && s[i+1]=='c')
                    s[i]='b';
                else if(i>0 && s[i-1]=='c' && s[i+1]=='a')
                    s[i]='b';


                else if(i>0 && s[i-1]=='a' && s[i+1]=='?')
                    s[i]='b';
                else if(i>0 && s[i-1]=='b' && s[i+1]=='?')
                    s[i]='c';
                else if(i>0 && s[i-1]=='c' && s[i+1]=='?')
                    s[i]='a';

                else if(i>0 && s[i-1]=='a' && s[i+1]=='a')
                    s[i]='b';
                else if(i>0 && s[i-1]=='b' && s[i+1]=='b')
                    s[i]='c';
                else if(i>0 && s[i-1]=='c' && s[i+1]=='c')
                    s[i]='a';

                else if(i==len-1 && s[i-1]=='a')
                    s[i]='b';
                else if(i==len-1 && s[i-1]=='b')
                    s[i]='c';
                else if(i==len-1 && s[i-1]=='c')
                    s[i]='b';
            }

        }
        if(p==1)
            cout<<-1;

        else
        {
            cout<<s;
        }

        cout<<endl;
        p=0;
    }
    return 0;
}
