#include <iostream>

using namespace std;

void solve()
{
    int n1,n2,n4,n5 ;
    cin>> n1>>n2>>n4>>n5 ;

    int s1,s2,s3 ;
    s1=n1+n2 ;
    s2=n4-n2 ;
    s3=n5-n4 ;

    if(s1==s2 && s2==s3) cout<<3<<endl ;
    else if((s1==s2 && s2!=s3) || (s1!=s2 && s2==s3) || (s1==s3 && s3!=s2)) cout<<2<<endl ;
    else cout << 1<<endl ;

}

int main()
{
    int t ;
    cin>> t ;
    while (t--)
        solve() ;
}

