#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n ;
    cin>>n ;
    int a=0, b=0 ;
    while(n--)
    {
        char ch ;
        cin>>ch ;
        if(ch=='-') a++ ;
        else b++ ;
    }

    if(a%2==0) cout<<(long long)b*(a/2)*(a/2)<<endl ;
    else cout<<(long long)b*(a/2)*((a+1)/2)<<endl ;
}

int main()
{
    int t;
    cin>> t ;
    while(t--)
        solve();
    return 0;
}
