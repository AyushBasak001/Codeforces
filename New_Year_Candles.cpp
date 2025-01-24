#include <iostream>

using namespace std;

int main()
{
    int a, b ;
    cin >>a>>b ;

    int c=1 ;
    while(c<=a)
    {
        if(c%b==0) a++ ;
        c++ ;
    }
    cout<<--c ;
    return 0;
}
