#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n=0 ;
    cin>>n ;
    map<int,int> b ;  //B(j) = A(j) - j
    long long p=0 ;
    for(int i=0 ; i<n ; i++)
    {
        int a ;
        cin>> a ;
        p+=b[a-i] ;
        b[a-i]++ ;
    }

    cout<<p<<endl ;
}

int main()
{
    int t=0;
    cin>>t ;
    while(t--)
        solve() ;
    return 0;
}
