#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n ;
    cin >> n ;
    vector<int> arr(n) ;
    for(int i=0 ; i<n ; i++)
        cin>> arr[i] ;

    sort(arr.begin(), arr.end()) ;
    int ev=0 ;
    bool match = false ;
    if(arr[0]%2==0) ev++ ;
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i]-arr[i-1]==1) match=true ;
        if(arr[i]%2==0) ev++ ;
    }

    if(ev%2==0 || match) cout<<"YES\n" ;
    else cout<<"NO\n" ;

}
int main()
{
    int t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
