#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b ;
    cin >>n>>m>>a>>b ;

    int total=0 ;

    if(b<=a*m)
    {
        total += b*(n/m) ;
        n %= m ;
    }
    else
    {
        total += a*(n-m) ;
        n = m ;
    }

    if(b<a*n)
        total += b ;
    else
        total += a*n ;

    cout<<total<<endl ;

}
