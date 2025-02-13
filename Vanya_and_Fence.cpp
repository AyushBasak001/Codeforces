#include <iostream>

using namespace std;

int main()
{
    int n, h, row=0 ;
    cin >>n>>h ;
    while(n--)
    {
        int height ;
        cin>>height ;
        if(height<=h) row++ ;
        else row+=2 ;
    }

    cout<<row ;

    return 0;
}
