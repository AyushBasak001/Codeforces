#include <iostream>
#include <string>

using namespace std;

int main()
{
    string out{},s{} ;
    cin >> s ;

    for (char ch : s)
    {
        ch=tolower(ch) ;
        if((ch=='a')||(ch=='o')||(ch=='y')||(ch=='e')||(ch=='u')||(ch=='i'))
            continue ;
        else
        {
            out += '.' ;
            out += ch ;
        }
    }

    cout << out ;
}
