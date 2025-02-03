#include <iostream>

using namespace std;

void solve()
{
    long long n,k ;
    cin>>n>>k ;
    if(k%2==n%2 && n >= k*k)  cout<<"YES\n" ;
    else cout<<"NO\n" ;
}

int main()
{
    int t ;
    cin >> t ;
    while(t--)
        solve() ;

    return 0;
}
