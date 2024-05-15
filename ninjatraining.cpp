#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int points(vector<vector<int>> &nums, int last, int size)
{
    int point;
    if (size == 0)
    {
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, nums[0][i]);
            }
        }
        return maxi;
    }
    int maxi = 0;
    for (int i = 0; i < 3; i++)
    {
        if (i != last)
        {
            point = nums[size][i] + points(nums, i, size - 1);
            maxi = max(point, maxi);
        }
    }
    return maxi;
}
int main()
{
    int n;
    vector<vector<int>> nums = {{2, 1, 3}, {3, 4, 6}, {10, 2, 6}, {8, 3, 7}};
    n = nums.size();
    cout << n;
    getch();
    cout << points(nums, 3, n - 1);
    getch();
    return 0;
}