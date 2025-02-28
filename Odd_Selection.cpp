#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, x ; cin>>n>>x ;
    int odd=0, even=0 ;
    while(n--)
    {
        int a; cin>>a ;
        if(a&1) odd++ ;
        else even++ ;
    }

    if((odd^1)==(odd-1))
    {
        if((x^1)==(x-1)) x-=min(x,odd) ;
        else x-=min(x-1, odd);
    }
    else
    {
        if((x^1)==(x-1)) x-=min(x,odd-1) ;
        else x-=min(x-1, odd-1);
    }

    if(even>=x && odd!=0) cout<<"YES\n" ;
    else cout<<"NO\n" ;

}

int main()
{
    int t ;
    cin>>t ;
    while(t--)
        solve();
    return 0;
}
