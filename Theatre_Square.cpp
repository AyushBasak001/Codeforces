#include <iostream>

using namespace std;

int main()
{
    int n, m , a ;
    cin >>n>>m>>a ;

    if(n%a==0)
        n=(n/a) ;
    else
        n=(n/a)+1 ;

    if(m%a==0)
        m=(m/a) ;
    else
        m=(m/a)+1 ;

    cout<< (long long)n*m ;

    return 0;
}
