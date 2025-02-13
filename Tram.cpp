#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>> n ;
    int cur=0, max=0 ;
    while(n--)
    {
        int in, out ;
        cin>>out>>in ;
        cur = cur + in - out ;
        if(cur>max) max = cur ;
    }
    cout<<max ;
}
