#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
//memoization
/*
int fibbo(vector<int> &dp,int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = (n - 1) + (n - 2);
}*/
//tabulization
int fibbo( int n)
{
    if(n <= 1)
    {
        return n;
    }
    int a = 0 ;
    int b = 1;
    for( int i = 2; i<=n;i++)
    {
        int c = a+b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{

    int x;
    cin >> x;
    // vector<int> dp(-1, n);// 5 - - - - - -1 -1 -1 -1 -1
    cout << fibbo(x);
    getch();
    return 0;
}
// 0 1 2
// 2 3 4
// 5 3 1