#include <iostream>

using namespace std;

int main()
{
    int n, n1=0;
    cin>>n;

    int sum=0, msum=0 ;
    for(int i=0 ; i<n ; i++)
    {
        bool num ;
        cin>>num ;
        if(num) {n1++; sum-- ;}
        else sum++ ;

        if(sum>msum) msum=sum ;
        if(sum<0) sum=0 ;
    }
    if(msum) cout<<n1+msum ;
    else cout<<n-1 ;

    return 0;
}
