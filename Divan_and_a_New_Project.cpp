#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t ;
    cin>> t ;
    while (t--)
    {
        int n ;
        cin >> n ;

        vector<vector<int>> loc ;

        for(int i=0 ; i<n ;i++)
        {
            int a;
            cin >> a ;
            loc.push_back({a,i});
        }

        sort(loc.rbegin(),loc.rend()) ;

        int res[n+1] ;

        res[0]=n/2 ;
        int l=n/2-1, r=n/2+1;
        long long time=0 ;

        for(int i=0 ; i<n ; i+=2)
        {
            time += (2LL * abs(r - (n / 2)) * loc[i][0]);
            res[loc[i][1]+1]=r++ ;
        }
        for(int i=1 ; i<n ; i+=2)
        {
            time += (2LL * abs(l - (n / 2)) * loc[i][0]);
            res[loc[i][1]+1]=l-- ;
        }

        cout<<"\n"<<time<<"\n" ;

        for(int i : res) cout<<i<<' ' ;
    }
}
