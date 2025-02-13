#include <iostream>

using namespace std;

void solve()
{
    int n, k  ;
    cin >>n>>k ;
    int low=1, high=k ;
    long long int mid ;
    while(low<=high)
    {
        mid = (low+high)/2 ;
        if((n-1)*(mid-1) < k && (n-1)*mid >= k) break ;
        else if((n-1)*mid < k) low = mid+1 ;
        else high = mid-1 ;
    }
    cout<<mid+k-1<<endl ;
}
int main()
{
    int t ;
    cin>> t;
    while(t--)
        solve() ;
    return 0;
}
