#include <iostream>
#include <string>

using namespace std;

int main()
{
    char found='n' ;
    string s1, s2 ;
    cin >> s1 >> s2 ;

    for (int i=0 ; i<min(s1.length(),s2.length()) ; i++)
    {
        if(tolower(s1[i])<tolower(s2[i]))
        {
            found='y' ;
            cout << -1 ;
            break ;
        }
        else if (tolower(s1[i])>tolower(s2[i]))
        {
            found='y' ;
            cout << 1 ;
            break ;
        }
    }

    if (found=='n' && s1.length()==s2.length()) cout << 0 ;
    else if (found=='n' && s1.length()<s2.length()) cout << -1 ;
    else if (found=='n' && s1.length()>s2.length()) cout << 1 ;

}
