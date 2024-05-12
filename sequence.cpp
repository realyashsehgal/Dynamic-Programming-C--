#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int seq(int ind,vector<int> &vec1,int n,int arr[])
{
    if( ind >= n )
    {
        for( auto it:vec1)
        {
            cout<< it <<" ";
        }
        cout<<endl;
        return 1;
    }
    vec1.push_back(arr[ind]);
    seq(ind+1,vec1,n,arr);
    vec1.pop_back();
    seq(ind+1,vec1,n,arr);
    return 0;
}
int main()
{
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> vec1;
    seq(0,vec1,n,arr);
    getch();
}