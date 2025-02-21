#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t ;
    cin >> n >> t ;

    string num ;
    if(t==10 && n==1)
        num="-1" ;
    else if(t==10)
    {
        num = "1" ;
        for(int i=1 ; i<n-1 ; i++) num+="1" ;
        num+="0" ;
    }
    else
        for(int i=0 ; i<n ; i++) num += to_string(t) ;

    cout<<num ;

    return 0;
}
