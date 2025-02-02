#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    cin >> s ;

    int ch[26] = {0};

    for(char &c : s)
        ch[c-97]++ ;

    int unq=0 ;

    for(int i : ch)
        if(i!=0) unq++ ;

    if(unq%2==0) cout<<"CHAT WITH HER!" ;
    else cout<<"IGNORE HIM!" ;

}
