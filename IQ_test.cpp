#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    int odd[2]={0,0}, even[2]={0,0} ;
    for(int i=1 ; i<=n ; i++)
    {
        int num;
        cin>>num ;
        if(num & 1)
        {
            if(odd[0]==0) odd[1]=i ;
            odd[0]++ ;
        }
        else
        {
            if(even[0]==0) even[1]=i ;
            even[0]++ ;
        }
    }

    if(odd[0]==1) cout<<odd[1]<<'\n' ;
    else cout<<even[1]<<'\n' ;

    return 0;
}
