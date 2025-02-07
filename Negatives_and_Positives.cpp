#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int cnt=0 ;
    int abs=INT_MAX ;
    long long int sum=0 ;
    int n ;
    cin>>n ;
    while(n--)
    {
        int num ;
        cin >>num ;
        if(num<0)
        {
            cnt++ ;
            sum -= num ;
            if(-num<abs) abs = -num ;
        }
        else
        {
            sum += num ;
            if(num<abs) abs = num ;
        }
    }

    if(cnt%2==1) sum -= abs*2 ;

    cout<<sum<<endl ;

}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
        solve();

    return 0;
}
