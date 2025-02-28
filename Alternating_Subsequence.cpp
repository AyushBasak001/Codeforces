#include <iostream>

using namespace std;

void solve()
{
    int n ; cin>>n ;
    bool p ;
    long long int sum=0, po=0, ne=0 ;
    int n1; cin>>n1 ;
    if(n1>0) {p=1; po=n1;}
    else {p=0; ne=n1;}

    for(int i=1 ; i<n ; i++)
    {
        int n2 ; cin>>n2 ;
        if(n2>0)
        {
            if(p==0){sum+=ne ;ne=0 ;p=1;}
            if(n2>po) po=n2 ;
        }
        else
        {
            if(p==1){sum+=po ;po=0 ;p=0;}
            if(ne==0 || n2>ne) ne=n2 ;
        }
    }

    cout<<sum+ne+po<<'\n' ;

}

int main()
{
    int t ; cin>>t ;
    while(t--)
        solve() ;

    return 0;
}
