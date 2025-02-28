#include <iostream>

using namespace std;

void solve()
{
    long long int n;
    int k;
    cin>>n>>k;
    if(n & 1)
    {
        if((k&1) && (k<=n))
        {
            cout<<"YES\n"<<n-k+1<<' ' ;
            for(int i=1 ; i<k ; i++)cout<<1<<' ' ;
        }
        else cout<<"NO" ;
    }
    else
    {
        if(2*k<=n)
        {
            cout<<"YES\n"<<n-2*(k-1)<<' ' ;
            for(int i=1 ; i<k ; i++)cout<<2<<' ' ;
        }
        else if((k^1)==(k+1) && k<=n)
        {
            cout<<"YES\n"<<n-k+1<<' ' ;
            for(int i=1 ; i<k ; i++)cout<<1<<' ' ;
        }
        else cout<<"NO" ;
    }
    cout<<'\n' ;
}

int main()
{
    int t ;
    cin>>t ;
    while(t--)
        solve();
    return 0;
}
