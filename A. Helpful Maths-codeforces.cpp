#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,cs,out;
    int i,len,j,c=0;

    cin>>s;
    len = s.length();

    for(i=0;i<len;i++)
    {
        for(j=0;j<len-2;j+=2)
        {
            if(s[j]!= '+' && s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }
        cout<<s;
    return 0;
}
