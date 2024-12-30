#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pl ;
    cin >> pl ;

    int count=1 ;

    for (int i=1 ; i<pl.size() ; i++)
    {
        if (pl[i-1]==pl[i])
            count++ ;
        else
            count=1 ;

        if(count==7)
        {
            cout << "YES" ;
            break ;
        }
    }
    if (count<7)
        cout << "NO" ;
}
