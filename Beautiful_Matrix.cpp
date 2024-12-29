#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int loc[2] ;
    int mat [5][5] ;
    for (auto& row : mat)
        for (int& val : row)
            cin >> val ;

    for (int row=0 ; row <5 ; row++)
    {
        for (int col=0 ; col<5 ; col++)
        {
            if(mat[row][col]==1)
            {
                loc[0] = row+1 ;
                loc[1] = col+1 ;
                break ;
            }
        }
    }

    int moves = abs(3-loc[0]) + abs(3-loc[1]) ;

    cout << moves ;

    return 0 ;
}
