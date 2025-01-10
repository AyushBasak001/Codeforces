#include <iostream>

using namespace std;

int main()
{
    int a,b,c ;
    cin >>a>>b>>c ;
    int val[6] ;

    val[0] = (a+b+c);
    val[1] = (a+(b*c));
    val[2] = (a*(b+c));
    val[3] = ((a+b)*c);
    val[4] = ((a*b)+c);
    val[5] = (a*b*c);

    int m=val[0] ;

    for(int i=1 ; i<6 ; i++)
        m=max(m,val[i]) ;

    cout<<m ;



}
