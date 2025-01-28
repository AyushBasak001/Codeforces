#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >>n>>k ;
    int arr[n] ;
    for(int i=0 ;i<n ;i++)
        cin>>arr[i] ;

    int msum=0, csum=0 ;
    int idx=0 , f=0, l=0 ;

    for( ; l<k ; l++)
    {
        msum+=arr[l] ;
    }

    csum=msum ;

    while(l<n)
    {
        csum = csum-arr[f]+arr[l] ;
        if(csum<msum)
        {
            msum = csum ;
            idx = f+1 ;
        }
        f++ ;
        l++ ;
    }

    cout<<idx+1 ;

}
