#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n ;
    int out[n] ;
    for(int i=1 ; i<=n ; i++)
    {
        int p ;
        cin>>p ;
        out[p-1] = i ;
    }

    for(int i : out) cout<<i<<' ' ;
    return 0;
}
