#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,x ;cin>>n>>x ;
    double sum=0 ;

    for (int i=0; i<n; i++)
    {
        int s ;
        cin>>s ;
        sum+=s ;
    }
    sum /= n;
    if(sum==x) cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    int t ; cin>>t ;
    while(t--)
        solve();

    return 0;
}
