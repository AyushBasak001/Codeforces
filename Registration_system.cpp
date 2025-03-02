#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n ;
    map<string,int> name ;
    while(n--)
    {
        string n1; cin>>n1 ;

        if(name[n1]==0) {name[n1]++; cout<<"OK\n" ;}
        else {cout<<n1+to_string(name[n1])<<'\n'; name[n1]++ ;}

    }
}
