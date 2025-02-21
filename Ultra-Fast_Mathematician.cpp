#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n1, n2, n3 ;
    cin>>n1>>n2 ;
    for(int i=0 ; i<n1.length() ; i++)
    {
        if(n1[i]==n2[i]) n3+="0" ;
        else n3+="1" ;
    }

    cout<<n3 ;
}
