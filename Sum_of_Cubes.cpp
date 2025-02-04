#include <bits/stdc++.h>

using namespace std;

bool isPerfectCube(long long n)
{
    long long c = cbrt(n);
    return c * c * c == n;
}

void solve()
{
    long long int n ;
    cin >> n ;

    bool found = false ;

    for(long long i=1 ; i*i*i<n ; i++)
    {
        long long rem = n - i*i*i ;
        if(rem<= 0)
            break ;

        if (isPerfectCube(rem))
        {
            found = true;
            break;
        }
    }

    if(found)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
        solve();

    return 0;
}
