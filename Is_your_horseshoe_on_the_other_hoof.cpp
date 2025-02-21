#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> s(4) ;
    for(int i=0 ; i<4 ; i++) cin>>s[i] ;
    sort(s.begin(), s.end()) ;
    int same=0 ;
    for(int i=1 ; i<4 ; i++)
        if(s[i]==s[i-1])same++ ;

    cout<<same ;

    return 0;
}
