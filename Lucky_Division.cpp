#include <iostream>

using namespace std;

int main()
{
    int arr[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777} ;
    int n ;
    cin>>n ;
    bool found = false ;
    for(int i :arr)
        if(n%i==0)
        {
            found = true ;
            cout<<"YES"<<endl ;
            break ;
        }

    if(!found)
        cout<<"NO" ;
}
