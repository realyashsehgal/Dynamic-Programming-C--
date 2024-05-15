#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost, int i) {
    if (i < 0) return 0;
    if (i == 0 || i == 1) return cost[i];
    return cost[i] + min(minCostClimbingStairs(cost, i - 1), minCostClimbingStairs(cost, i - 2));
}

int main() {
    vector<int> stairs {10, 15, 20};
    cout << min(minCostClimbingStairs(stairs, stairs.size() - 1), minCostClimbingStairs(stairs, stairs.size() - 2));
    getch();
    return 0;
}
