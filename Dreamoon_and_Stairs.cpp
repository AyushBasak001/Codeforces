#include <iostream>

using namespace std;

int main()
{
    int n,m; cin>>n>>m ;
    int step=n/2 ;
    if(n&1) step++ ;

    if(n<m)
    {
        cout<<-1;
        return 0;
    }

    for(int i=step ; i<=n ; i++)
    {
        if(i%m==0) {
            cout<<i ;
            return 0;
        }
    }

    cout<<-1;
    return 0;
}
