#include <iostream>
#include <string>


using namespace std;

int main()
{
    int x=0, n=0 ;
    cin >> n ;

    while (n--)
    {
        string val ;
        cin >> val ;
        if (val.find('-') == string::npos)
            x++ ;
        else
            x-- ;
    }

    cout << x ;
}
