#include <iostream>
#include <string>

using namespace std;

int main()
{
    string h="hello" ;
    string s ;
    cin >> s;

    int i=0, j=0 ;

    while(j<s.size())
    {
        if(s[j]==h[i])
            i++ ;
        j++ ;
    }

    if(i==h.size()) cout<<"YES" ;
    else cout<<"NO" ;
}
