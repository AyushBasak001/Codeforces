#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int s, n ;
    cin>>s>>n ;
    vector<vector<int>> data ;
    while(n--)
    {
        int x, y ;
        cin>>x>>y ;
        data.push_back({x,y});
    }

    sort(data.begin(),data.end()) ;

    for(auto m : data)
    {
        if(m[0]>=s)
        {
            cout<<"NO" ;
            return 0 ;
        }
        else
            s+=m[1] ;
    }

    cout<<"YES" ;
}
