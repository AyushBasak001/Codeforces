#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n ;
    cin>> n ;
    vector<int> arr(n) ;
    for(int i=0 ; i<n ; i++)
        cin>>arr[i] ;

    int d1=-2 , d2=2*n ;
    for(int i=0 ; i<n ; i++)
    {
        d1+=2 ;
        d2-=2 ;
        if(arr[i]<=d1 || arr[i]<=d2)
        {
            cout<<"NO"<<endl ;
            return ;
        }
    }
    cout<<"YES"<<endl ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
        solve() ;
    return 0;
}
