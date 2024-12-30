#include <iostream>

using namespace std;

int main()
{
    int n ;
    int count{0},q{0} ;
    cin >> n ;
    int rec[n][3] ;
    for (auto& row : rec)
        for (int& val : row)
            cin >> val ;

    for (auto& row : rec)
    {
        for (int& val : row)
            if (val==1)
                count++ ;
        if (count>=2)
            q++ ;

        count = 0 ;
    }

    cout<< q ;

    return 0 ;
}
