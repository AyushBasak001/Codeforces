#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2 ;
    cin>>x1>>y1>>x2>>y2 ;

    int d1=abs(x2-x1), d2=abs(y2-y1) ;

    if(d1==0 && d2==0) {cout<<-1; return 0 ;}
    if(d1!=0 && d2!=0 && d1!=d2) {cout<<-1; return 0 ;}

    if(d1==0) cout<<x1+d2<<' '<<y1<<' '<<x2+d2<<' '<<y2 ;
    else if(d2==0) cout<<x1<<' '<<y1+d1<<' '<<x2<<' '<<y2+d1 ;
    else cout<<x1<<' '<<y2<<' '<<x2<<' '<<y1 ;

}
