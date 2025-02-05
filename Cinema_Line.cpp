#include <iostream>

using namespace std;

int main()
{
    int n, r25=0, r50=0 ;
    cin >> n ;
    int arr[n] ;
    while(n--)
    {
        int r ;
        cin >>r ;
        if(r==25)
            r25++ ;
        else if (r==50 && r25>0)
        {
            r25-- ;
            r50++ ;
        }
        else if (r==100 && r50>0 && r25>0)
        {
            r50-- ;
            r25-- ;
        }
        else if (r==100 && r25>2)
            r25 -= 3 ;
        else
        {
            cout<<"NO";
            return 0 ;
        }
    }
    cout<<"YES" ;


    return 0;
}
