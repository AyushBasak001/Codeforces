#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    cin >> s ;

    if (s.length()==1) cout << s ;

    else
    {
        int n1=0,n2=0,n3=0 ;

        for(int i=0 ; i<s.length() ; i+=2 )
        {
            if(s[i]=='1') n1++ ;
            else if(s[i]=='2') n2++ ;
            else if(s[i]=='3') n3++ ;
        }

        string res ;

        while(n1--)
            res+="1+" ;
        while(n2--)
            res+="2+" ;
        while(n3--)
            res+="3+" ;

        res.pop_back() ;

        cout << res ;

    }

}
