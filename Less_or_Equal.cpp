#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k ;
    cin>>n>>k ;

    vector<int> nums ;

    while(n--)
    {
        int a ;
        cin>>a;
        nums.push_back(a);
    }

    sort(nums.begin(),nums.end()) ;

    if(k==0 && nums[0]==1) cout<<-1 ;
    else if(k==0 && nums[0]!=1) cout<<1 ;
    else if(nums[k]==nums[k-1]) cout<<-1 ;
    else cout << nums[k-1] ;

}
