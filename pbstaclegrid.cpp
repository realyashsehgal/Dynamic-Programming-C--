class Solution {
public:
    int sol(vector<vector<int>>& grid,vector<vector<int>>& dp,int i, int j)
    {
        if((i == 0 && j == 0 )&& grid[i][j] != 1)
        {
            return 1;
        }
        if(i<0 || j < 0 )
        {
            return 0;
        }
        if(grid[i][j] == 1)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int up = sol(grid,dp,i-1,j);
        int left = sol(grid,dp,i,j-1);
        return dp[i][j] = up+left;
    } 
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i = obstacleGrid.size();
        int j = obstacleGrid[0].size();
        vector<vector<int>> dp(i, vector<int>( j, -1));
        return sol(obstacleGrid,dp, i-1, j-1);
    }
};