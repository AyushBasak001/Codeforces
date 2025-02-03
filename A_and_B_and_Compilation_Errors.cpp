#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    vector<int> e1(n), e2(n-1), e3(n-2) ;
    for(int i=0 ; i<n ; i++)
        cin>>e1[i] ;
    for(int i=0 ; i<n-1 ; i++)
        cin>>e2[i] ;
    for(int i=0 ; i<n-2 ; i++)
        cin>>e3[i] ;

    sort(e1.begin(), e1.end()) ;
    sort(e2.begin(), e2.end()) ;
    sort(e3.begin(), e3.end()) ;

    int n1=e1.back(),n2=e2.back() ;

    for(int i=0; i<n-1 ; i++)
    {
        if(e1[i]!=e2[i])
        {
            if(e1[i]>e2[i]) n1 = e2[i] ;
            else n1 = e1[i] ;

            break ;
        }
    }

    for(int i=0; i<n-2 ; i++)
    {
        if(e2[i]!=e3[i])
        {
            if(e2[i]>e3[i]) n2 = e3[i] ;
            else n2 = e2[i] ;

            break ;
        }
    }

    cout<<n1<<endl<<n2 ;

    return 0;
}
