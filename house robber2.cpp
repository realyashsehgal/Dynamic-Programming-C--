#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int rob (int index, vector<int> vec2,vector<int>dp)
{
    int pick,dont_pick;
    if(index == 0)
    {
        return vec2[index];
    }
    if(index < 0 )
    {
        return 0;
    }
    if(dp[index] != -1)
    {
        return dp[index];
    }
    pick = vec2[index] + rob(index-2,vec2,dp);
    dont_pick = 0 + rob(index - 1,vec2,dp);
    dp[index] = max(pick,dont_pick);
    cout<<endl;
    return dp[index];
}
int main ()
{
    int ans1,ans2;
    vector<int>vec1{2,10,4};
    int size = vec1.size();
    getch();
    vector<int> dp( size,-1  );
    getch();
    ans1 = rob(size - 2,vec1,dp);
    
    getch();
    return 0;
}