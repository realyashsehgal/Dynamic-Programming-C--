#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int rob ( vector<int> vec2){
    int n = vec2.size();
    int prev = vec2[0];
    int prev2 = 0 ;
    for( int i = 1 ; i < n ; i++)
    {
        int take = vec2[i];
        if(i>1) 
        {
            take+= prev2;
        }
        int nottake = 0 + prev;
        int curi = max(take,nottake);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}
int main ()
{
    vector<int>vec1{2,10,4};
    int size = vec1.size();
    vector<int> dp( size,-1  );
    cout<<rob(vec1);
    getch();
    return 0;
}