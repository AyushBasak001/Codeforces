#include <iostream>

using namespace std;

void solve()
{
    int n ;
    cin >> n ;
    if(n%2==0)
        cout<<(n/2)-1<<endl ;
    else
        cout <<(n-1)/2 << endl ;
}

int main()
{
    int t ;
    cin>> t ;
    while(t--)
        solve() ;
}
