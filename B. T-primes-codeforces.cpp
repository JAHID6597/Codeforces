#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long pp)
{
    int c = 2;

    if(pp < 2)
        return false;
    else if(pp == 2)
        return true;

    if(pp%2 == 0)
        return false;
    for(int i=3; i <= sqrt(pp); i += c)
    {
        if(pp%i == 0)
            return false;
    }
    return true;
}
int main()
{
    long long n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long p=sqrt(n);
        if(p*p == n && isPrime(p) == true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
