#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    while (n--)
    {
        int a1, a2, a3, a4, win=0 ;
        cin >> a1 >> a2 >> a3 >>a4 ;

        if((a1>a3 && a2>=a4) || (a1>=a3 && a2>a4))
            win++ ;
        if((a1>a4 && a2>=a3) || (a1>=a4 && a2>a3))
            win++ ;
        if((a2>a3 && a1>=a4) || (a2>=a3 && a1>a4))
            win++ ;
        if((a2>a4 && a1>=a3) || (a2>=a4 && a1>a3))
            win++ ;

        cout << win << "\n";
    }
}
