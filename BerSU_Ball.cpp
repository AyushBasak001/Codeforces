#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    vector<int> boys(n) ;
    for(int i=0 ; i<n ; i++) {cin >> boys[i] ;}
    int m ;
    cin>>m ;
    vector<int> girls(m) ;
    for(int i=0 ; i<m ; i++) {cin >> girls[i] ;}

    sort(boys.begin(), boys.end()) ;
    sort(girls.begin(), girls.end()) ;

    int i=0, j=0, p=0 ;
    while(i<n && j<m)
    {
        if(girls[j]<boys[i]-1) j++ ;
        else if(girls[j]>boys[i]+1) i++ ;
        else{j++ ; i++ ; p++ ;}
    }

    cout<<p ;
}
