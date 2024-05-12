#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int fib(int n)
{
    if (n <= 1)
        return n;

    int prev2 = 0, prev = 1;
    for (int i = 2; i <= n; i++)
    {
        int curi = prev + prev2;
        prev2 = prev;
        prev = curi;
    }
    return prev;
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    getch();
    return 0;
}