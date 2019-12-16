#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len,j,i;
    len = s.size();
    for(i=0;i<len;i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    for(int k=0;k<len;k++){
        for(i=0;i<len;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
                j=i;
            while(j<len-1){
                s[j]=s[j+1];
                j++;
            }
        len = len -1;
        }
    }
    }
    for(i=0;i<len;i++){
        cout<<'.'<<s[i];
    }
    return 0;
}
