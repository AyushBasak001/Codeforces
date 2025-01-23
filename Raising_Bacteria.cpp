#include <iostream>

using namespace std;

int main()
{
    int x, n=0 ;
    cin>>x;
    while(x>0)
    {
        if(x%2==1)
        {
            n++ ;
            x-- ;
        }
        else
            x/=2 ;
    }
    cout << n ;
}
