#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int n,a,b,c,d ;
        cin>> n>>a>>b>>c ;

        d = 3*(n/(a+b+c)) ;
        n=n%(a+b+c) ;


        if(n==0) cout << d<<endl ;
        else if (n<=a) cout<<d+1<<endl ;
        else if (n<=a+b) cout<<d+2<<endl ;
        else cout << d+3<<endl ;

    }
     return 0 ;
}
