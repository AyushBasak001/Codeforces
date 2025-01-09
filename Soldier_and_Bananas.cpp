#include <iostream>

using namespace std;

int main()
{
    int k, n, w ;
    cin>> k>> n>> w ;
    int req=((w*(w+1))/2)*k ;

    if(req<=n)
        cout << 0 ;
    else
        cout << req-n ;

    return 0;
}
