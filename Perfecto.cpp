#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long x) {
    long long s = sqrt(x);
    return s * s == x;
}

void solve() {
    long long n;
    cin >> n;
    if(isPerfectSquare((n*(n+1))/2)) {cout<<-1<<'\n'; return ;}

    long long sum=0,i=1 ;
    for( ; i<=n; i++)
    {
        if(isPerfectSquare(sum+i))
        {
            cout<<i+1<<' '<<i<<' ' ;
            sum+=i+i+1 ;
            i++ ;
        }
        else
        {
            cout<<i<<' ';
            sum+=i;
        }
    }
    cout<<'\n' ;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
