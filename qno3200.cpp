#include <iostream>
#include <conio.h>
using namespace std;
int max_height(int red, int blue, int height, int prev, int lev)
{
    int take_blue = 0;
    int take_red = 0;
    cout << "red " << red << endl;
    cout << "blue " << blue << endl;
    cout << "height " << height << endl;
    cout << "lev " << lev << endl;
    cout << "prev " << prev << endl
         << endl;
    getch();
    if (prev != 0)
    {
        take_red = height + max_height(red - lev, blue, height + 1, 0, lev + 1);
    }
    if (prev == 0)
    {
        take_blue = height + max_height(red, blue - lev, height + 1, 1, lev + 1);
    }
    if (red - lev < 0 && blue - lev < 0)
    {
        return 0;
    }
    return max(take_blue, take_red);
}
int main()
{
    int redfirst = max_height(2, 1, 0, 1, 1);
    int bluefirst = max_height(2, 1, 0, 0, 1);
    int win = max(redfirst, bluefirst);
    cout << win << endl;
    getch();
    return 0;
}