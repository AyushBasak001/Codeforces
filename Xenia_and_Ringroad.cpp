#include <iostream>

using namespace std;

int main()
{
    int n, m ;
    cin >> n>>m ;
    int arr[m] ;

    for(int i=0 ;i<m ;i++)
        cin>>arr[i] ;

    int cur=1 ;
    long long int time=0 ;
    for(int i : arr)
    {
        if(i>cur)
            time+=i-cur ;
        else if(i<cur)
            time+=n-(cur-i) ;

        cur=i ;
    }

    cout<<time ;

}
