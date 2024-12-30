#include <iostream>

using namespace std;

int main()
{
    int n=0, k=0, out=0 ;

    cin >> n ;
    cin >> k ;

    int score[n] ;

    for (int& s : score)
        cin >> s ;

    for (int& s : score)
    {
        if(s>0 && s>=score[k-1])
            out++ ;
        else
            break ;

    }

    cout<<out ;

}
