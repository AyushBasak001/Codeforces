#include <iostream>

using namespace std;

int main()
{
    int n, t ;
    cin >>n>>t ;
    int arr[n] ;
    for(int i=0 ; i<n-1 ; i++)
        cin >> arr[i] ;

    int cur=0 ;
    while(cur<t-1)
        cur+=arr[cur] ;

    if(cur==t-1)
        cout<<"YES" ;
    else
        cout<<"NO" ;

}
