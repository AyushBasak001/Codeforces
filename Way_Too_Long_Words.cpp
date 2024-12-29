#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n=0 ;
    vector<string> str ;
    string word ;

    cin>>n ;
    while(n--)
    {
        cin >> word ;
        str.push_back(word);
    }

    for (string& s : str)
    {
        if (s.length()>10)
        {
            word = s[0] + to_string(s.length()-2) + s[s.length()-1] ;
            cout << word<<endl ;
        }
        else
            cout << s <<endl ;
    }

    return 0;
}
