#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    cin >> s ;

    int up=0,lo=0 ;

    for(char& ch : s)
    {
        if(isupper(ch))
        {
            up++ ;
            ch=tolower(ch) ;
        }
        else lo++ ;
    }

    if(up>lo)
        for(char& ch : s)
            ch=toupper(ch) ;

    cout<<s ;
}
