#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    vector<int> a1(n);
    vector<long long int> s1(n+1) ;
    s1[0]=0 ;
    for(int i=0 ; i<n ; i++)
    {
        int v ;
        cin>>v ;
        a1[i]=v ;
        s1[i+1] = s1[i] + v ;
    }
    sort(a1.begin(),a1.end()) ;
    vector<long long int> s2(n+1) ;
    s2[0]=0 ;
    for(int i=0 ; i<n ; i++) s2[i+1] = s2[i] + a1[i] ;

    int m ;
    cin>>m ;
    while(m--)
    {
        int type, l, r ;
        cin>>type>>l>>r ;

        if(type==1) cout<<s1[r]-s1[l-1]<<'\n' ;
        else cout<<s2[r]-s2[l-1]<<'\n' ;
    }

    return 0;
}
