#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n ;
    double total=n*100, fill=0 ;

    while(n--)
    {
        int v ;
        cin>>v ;
        fill+=v ;
    }

    printf("%.12f\n", (fill/total)*100);
}
