#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    vector<int> data(4) ;

    for(int i=0 ; i<n ; i++)
    {
        int a ;
        cin >> a ;
        data[a-1]++ ;
    }


    int num=data[3] ;
    data[3]=0 ;

    if(data[0]>=data[2])data[0] -= data[2] ;
    else if(data[0]<data[2]) data[0]=0 ;
    num+=data[2] ;
    data[2]=0 ;

    num+=data[1]/2 ;
    if(data[1]%2==1)
    {
        if(data[0]>=2)
            data[0]-=2 ;
        else if(data[0]==1)
            data[0]=0 ;

        num++ ;
    }
    data[1]=0 ;

    num+=data[0]/4 ;
    if(data[0]%4!=0)
        num++ ;
    data[0] = 0 ;


    cout<<num ;
}
