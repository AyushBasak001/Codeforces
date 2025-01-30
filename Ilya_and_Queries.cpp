#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    cin>>s ;
    int sz =s.length() ;

    int pre[sz] = {0} ;
    for(int i=1 ; i<sz ; i++)
    {
        pre[i] = pre[i-1] ;
        if(s[i]==s[i-1]) pre[i]++ ;
    }

    int m ;
    cin>>m ;
    while(m--)
    {
        int l,r ;
        cin>>l>>r ;
        cout<<pre[r-1]-pre[l-1]<<endl ;
    }

    return 0;
}
