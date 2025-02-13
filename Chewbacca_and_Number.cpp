#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n=0, m=0 ;
    cin >> n ;

    int d=1, digit = n%10 ;
    n /= 10 ;
    if(digit==9 && n==0) digit = digit ;
    else if(9-digit<digit) digit = 9-digit ;
    m = digit ;

    while(n!=0)
    {
        digit = n%10 ;
        n /= 10 ;
        if(digit==9 && n==0) digit = digit ;

        else if(9-digit<digit) digit = 9-digit ;

        m = m + (pow(10,d++)*digit);
    }

    cout<<m ;

    return 0;
}
