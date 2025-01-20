#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n,m ;
    cin >>n>>m ;
    vector<vector<int>> card ;
    for (int i=0 ; i<n ; i++)
    {
        vector<int> ci ;
        for(int j=0; j<m ; j++)
        {
            int n ;
            cin>> n;
            ci.push_back(n);
        }
        card.push_back(ci);
    }

    if(n==1)
    {
        cout<<1 ;
        return ;
    }

    for(auto& v : card)
    {
        sort(v.begin(),v.end()) ;
        for (int i=1; i<m ; i++)
        {
            if(v[i]-v[i-1]!=n)
            {
                cout << -1 ;
                return ;
            }
        }
    }

    vector<vector<int>> res ;
    for(int i=0 ; i<n ; i++)
    {
        res.push_back({card[i][0],i});
    }

    sort(res.begin(),res.end()) ;

    for(int i=0 ; i<n ; i++)
    {
        cout<<res[i][1]+1<<' ' ;
    }

}

int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
        cout<<endl ;
        solve() ;
    }
}
