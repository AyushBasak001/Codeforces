#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n,m ;
        cin >> n >>m ;

        vector<vector<int>> pos ;
        while(n--)
        {
            int n1,n2 ;
            cin >> n1 >> n2 ;
            pos.push_back({n1,n2});
        }

        int per=4*m ;

        for (int i=1 ;i<pos.size() ; i++)
        {
            int x=2*(m-pos[i][0]) ;
            int y=2*(m-pos[i][1]) ;
            if(x>0)
                per-=x ;
            if(y>0)
                per-=y ;

            per+=4*m ;
        }

        cout << per <<endl  ;
    }
    return 0;
}
