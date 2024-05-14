#include <iostream>
#include <conio.h>
using namespace std;
int climbstairs(int n)
{
        int i,curr;
        int one = 2;
        int two = 1;
            if (n <= 1) {
                return n;
            }
        for ( i = 2; i < n; i++) {
            curr = one + two;
            two = one;
            one = curr;
        }
        return one;
}
int main()
{
    int n;
    cin >> n;
    cout << climbstairs(n);
    getch();
}