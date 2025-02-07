#include <iostream>

using namespace std;

void solve()
{
    int a, b ;
    cin >> a >> b ;
    if(a<b)
    {
        int tmp = a ;
        a=b ; b=tmp ;
    }

    if(a>=(2*b))
        cout<<b<<endl ;
    else
    {
        int em = a-b ;
        a -= 2*em ;
        b -= em ;

        em += 2*(a/3) ;
        a -= 3*(a/3) ;
        b -= 3*(b/3) ;

        if(a==2 && b==2) em++ ;

        cout<<em<<endl ;
    }
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
        solve();

    return 0;
}
