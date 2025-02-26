#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k, p ;
    cin>>n>>k>>p ;
    int r = abs(k)/p ;
    if(abs(k)%p!=0) r++ ;
    if(r<=n) cout<<r<<endl ;
    else cout<<-1<<endl ;
}

int main()
{
    int t;
    cin>> t ;
    while(t--)
        solve();
    return 0;
}
