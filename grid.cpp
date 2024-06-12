#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int grids(vector<vector<int>> &grid , int i, int j)
{
    int left;
    int up;
    if( i == 0 || j == 0)
    {
        return  1 ;
    }
    if( i < 0 || j < 0 )
    {
        return 0;
    }
    left = grids(grid,i,j-1);
    up = grids(grid,i-1,j);
    return left+up;
}
int main ()
{
    int rows = 2 ;
    int col = 2 ;
    vector<vector<int>> grid(rows, vector<int>(col, 0)); 
    
    vector<vector<int>> memo(rows, vector<int>(col, 0)); 
    cout<< "The number of ways we can travel the grid are " << grids(grid,rows-1,col-1)<<endl;
    getch();
    return  0 ;
}