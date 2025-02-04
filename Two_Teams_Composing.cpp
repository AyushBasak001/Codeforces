#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n ;
    cin >> n ;
    vector<int> skill(n) ;
    for(int i=0 ; i<n ; i++)
        cin >> skill[i] ;

    sort(skill.begin(), skill.end()) ;

    int unq=1, ms=1, cs=1 ;

    for(int i=1 ; i<n ; i++)
    {
        if(skill[i]==skill[i-1])
        {
            cs++ ;
        }
        else
        {
            if(ms<cs) ms=cs ;
            cs=1 ;
            unq++ ;
        }
    }
    if(ms<cs) ms=cs ;

    cout<<max(min(unq-1, ms),min(unq,ms-1))<<endl ;
}
int main()
{
    int t ;
    cin >> t;
    while(t--)
        solve();

    return 0 ;
}
