#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;

    int a=0 ;
    for(char c : s)
        if(c=='A') a++ ;

    if(a>n-a) cout << "Anton" ;
    else if(a<n-a) cout << "Danik" ;
    else cout<< "Friendship" ;


    return 0;
}
