#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int rep=1, cnt_p=0, cnt_c=5 ;
    while(cnt_c<n)
    {
        rep*=2 ;
        int tmp = cnt_c ;
        cnt_c += (cnt_c - cnt_p)*2 ;
        cnt_p = tmp ;
    }
    int num = ((n-cnt_p)%rep==0) ? (n-cnt_p)/rep : ((n-cnt_p)/rep)+1 ;

    if(num==1) cout<<"Sheldon" ;
    else if(num==2) cout<<"Leonard" ;
    else if(num==3) cout<<"Penny" ;
    else if(num==4) cout<<"Rajesh" ;
    else if(num==5) cout<<"Howard" ;

    return 0;
}
