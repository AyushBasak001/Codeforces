#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int arr[n+1] = {0} ;
    for(int i=1 ; i<=n ; i++)
    {
        int a ;
        cin>> a ;
        arr[i] = arr[i-1] + a ;
    }
    int m ;
    cin >> m ;
    while(m--)
    {
        int q ;
        cin >> q ;
        int low=0 , high=n ;
        while(low<=high)
        {
            int mid = (low+high)/2 ;
            if(arr[mid]>=q && arr[mid-1]<q)
            {
                cout<<mid<<endl;
                break ;
            }
            else if(arr[mid]<q) low = mid+1 ;
            else if(arr[mid]>q) high = mid-1 ;
        }
    }

}
