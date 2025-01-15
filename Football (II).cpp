#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>> n;

    string t1, t2 ;
    cin >> t1 ;
    int w1=1,w2=0 ;
    n-- ;

    while (n--)
    {
        string t3 ;
        cin>> t3 ;
        if (t3==t1) w1++ ;
        else
        {
            t2=t3 ;
            w2++ ;
        }
    }

    if(w1>w2)
        cout << t1;
    else
        cout << t2 ;

    return 0;
}
