#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    cin >> s ;

    if(s.size()==1 && islower(s[0]))
    {
        s[0]=toupper(s[0]) ;
        cout<<s ;
    }

    else if(s.size()==1 && isupper(s[0]))
    {
        s[0]=tolower(s[0]) ;
        cout<<s ;
    }

    else if(isupper(s[0]))
    {
        bool c=true ;
        for(int i=1 ;i<s.size() ; i++)
        {
            if(islower(s[i]))
            {
                c=false ;
                break ;
            }
        }

        if(c)
            for(int i=0 ; i<s.size() ; i++)
                s[i]=tolower(s[i]) ;

        cout << s ;
    }

    else if(islower(s[0]) && isupper(s[1]))
    {
        bool c=true ;
        for(int i=2 ;i<s.size() ; i++)
        {
            if(islower(s[i]))
            {
                c=false ;
                break ;
            }
        }

        if(c)
        {
            s[0]=toupper(s[0]) ;
            for(int i=1 ; i<s.size() ; i++)
                s[i]=tolower(s[i]) ;
        }

        cout << s ;
    }

    else
        cout << s ;

}
