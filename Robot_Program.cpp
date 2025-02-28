#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n,x,k ;
    cin>>n>>x>>k ;
    string s ;
    cin>>s ;
    long long count=0 ;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='R')x++;
        else x-- ;
        k-- ;
        if(x==0) {count++ ; break ;}
    }
    long long rep=0 ;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='R')x++;
        else x-- ;
        if(x==0) {rep = i+1 ; break ;}
    }
    if(count && rep) count += k/rep ;
    cout<<count<<'\n' ;
}

int main()
{
    int t ;
    cin>>t ;
    while(t--)
        solve();
    return 0;
}
