#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        long long int n ;
        cin>>n ;
        if((n-1)%3==0) cout<<"YES\n" ;
        else cout<<"NO\n" ;
    }
}
