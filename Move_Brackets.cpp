#include <iostream>

using namespace std;

void solve()
{
    int n ;
    string s ;

    cin>>n ;
    cin>>s ;

    int op=0 ;

    for(auto ch : s)
    {
        if(ch=='(') op++ ;
        else if(op>0) op-- ;
    }

    cout << op <<endl ;
}


int main()
{
    int t ;
    cin >> t ;
    while(t--)
        solve() ;
}
