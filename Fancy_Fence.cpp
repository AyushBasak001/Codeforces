#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    while(n--)
    {
        int deg ;
        cin >> deg ;
        if(360%(180-deg)==0)
            cout << "YES\n" ;
        else
            cout<< "NO\n" ;
    }

    return 0 ;
}
