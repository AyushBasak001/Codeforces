#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    vector<vector<int>> candy ;
    while (n--)
    {
        vector<int> c ;
        int m ;
        cin >> m ;

        while (m--)
        {
            int k ;
            cin >> k ;
            c.push_back(k);
        }
        candy.push_back(c);
    }


    for(auto& can : candy)
    {
        int n1=0, n2=0 ;
        for(int& c : can)
        {
            if(c==1)
                n1++ ;
            else
                n2++ ;
        }

        if (n1%2==1 || (n1==0 && n2%2==1))
            cout << "NO"<<"\n" ;
        else
            cout << "YES"<<"\n" ;
    }
}
