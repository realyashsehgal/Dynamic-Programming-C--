#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int grids(vector<vector<int>> &memo,vector<vector<int>> &grid , int i, int j)
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
    if(memo[i][j] != -1)
    {
        return memo[i][j];
    }
    left = grids(memo,grid,i,j-1);
    up = grids(memo,grid,i-1,j);
   return memo[i][j] = left+up;
}
int main ()
{
    int rows = 3 ;
    int col = 7 ;
    vector<vector<int>> grid(rows, vector<int>(col, 0)); 
    
    vector<vector<int>> memo(rows, vector<int>(col, -1)); 
    cout<< "The number of ways we can travel the grid are " << grids(memo,grid,rows-1,col-1)<<endl;
    getch();
    return  0 ;
}