#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    vector<vector<int>> lap ;
    for(int i=0 ; i<n ; i++)
    {
        int a,b ;
        cin>>a>>b ;
        lap.push_back({a,b});
    }

    sort(lap.begin(), lap.end()) ;
    for(int i=1 ; i<n ; i++)
    {
        if(lap[i][1]<lap[i-1][1])
        {
            cout<<"Happy Alex" ;
            return 0 ;
        }
    }

    cout<<"Poor Alex" ;
    return 0 ;


}
