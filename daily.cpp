#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int minDays(vector<int> &bloomDay, int m, int k)
{
    vector<int> temp;
    int prev;
    temp = bloomDay;
    for (int j = 0; j < temp.size(); j++)
    {
        // if(temp[j] == prev)
        // {
        //     contnue;
        // }
        int max = temp[j];
        int counter = 0;
        int booket = 0;
        cout<<"max num = "<<max<<endl;
        getch();
        for (int i = 0; i < bloomDay.size(); i++)
        {
            cout<<"comp "<<bloomDay[i]<<endl;
            getch();
            if (bloomDay[i] <= max)
            {
                counter += 1;
            }
            if (bloomDay[i] > max)
            {
                counter = 0;
            }
            if (counter >= k && counter % k == 0)
            {
                booket += 1;
            }
            if (booket == m)
            {
                return max;
            }
        }
    }
    return -1;
}
int main ()
{
    vector<int> vec = {1,10,2,9,3,8,4,7,5,6};
    cout<<minDays(vec,4,2);
    getch(); 
    return 0;
}