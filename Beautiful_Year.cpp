#include <iostream>

using namespace std;

int main()
{
    int y ;
    cin >> y ;
    int d4 = y%10 ;
    y/=10 ;
    int d3 = y%10 ;
    y/=10 ;
    int d2 = y%10 ;
    y/=10 ;
    int d1 = y%10 ;

    do
    {
        if(d4!=9) d4++ ;
        else if(d3!=9) {d3++ ; d4=0 ;}
        else if(d2!=9) {d2++ ; d3=0 ; d4=0 ;}
        else {d1++ ; d2=0 ; d3=0 ; d4=0 ;}
    }
    while(d1==d2 || d1==d3 || d1==d4 || d2==d3 || d2==d4 || d3==d4 ) ;

    y = d1*1000 + d2*100 + d3*10 + d4 ;
    cout<<y ;
}
