#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p=0 ;
    cin>>n ;
    string pre = "00" ;
    while(n--)
    {
        string m ;
        cin>> m;
        if(m!=pre)
        {
            p++ ;
            pre = m ;
        }
    }
    cout<<p ;
    return 0;
}
