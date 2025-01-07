#include <iostream>

using namespace std;

int main()
{
    int a,b ;
    cin >> a ;
    cin >> b ;

    int year=1 ;

    for( ; 3*a<=2*b ; year++)
    {
        a = 3*a ;
        b = 2*b ;
    }


    cout << year ;

    return 0 ;
}
