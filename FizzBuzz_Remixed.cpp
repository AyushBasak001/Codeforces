#include <iostream>

using namespace std;

void solve()
{
    int n ;
    cin>>n ;
    long long num = 3*(n/15) ;
    n %= 15 ;

    if(n>=2) num+=3 ;
    else if(n==1) num+=2 ;
    else num+=1 ;

    cout<<num<<'\n';


}

int main()
{
    int t ;
    cin>>t ;
    while(t--)
        solve();
    return 0;
}
