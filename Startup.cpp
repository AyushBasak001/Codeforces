#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k ;
    cin>>n>>k ;
    vector<int> br(k,0) ;

    while(k--)
    {
        int b, c ;
        cin>>b>>c ;
        br[b-1] += c ;
    }

    sort(br.rbegin(), br.rend()) ;

    int sum=0 ;

    for(int i=0 ; i<min(n,(int)br.size()) ; i++)
    {
        if(br[i]==0) break ;
        sum+=br[i] ;
    }

    cout<<sum<<endl ;
}

int main()
{
    int t ;
    cin>> t ;
    while(t--)
        solve() ;
    return 0;
}
