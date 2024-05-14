// class Solution {
// public:
//     int solution(vector<int>& vec1) {

//         int n = vec1.size();
//         int prev = vec1[0];
//         int prev2 = 0;
//         for (int i = 1; i < n; i++) {
//             int take = vec1[i];
//             if (i > 1) {
//                 take += prev2;
//             }
//             int nottake = 0 + prev;
//             int curi = max(take, nottake);
//             prev2 = prev;
//             prev = curi;
//         }
//         return prev;
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> temp1;
//         vector<int> temp2;
//         if( n == 1 )
//         {
//             return nums[n];
//         }
//         for( int i = 0 ; i < n ; i++)
//         {
//             if(i != 0 ){
//                 temp1.push_back(nums[i]);
//             }
//             if( i != n-1){
//                 temp2.push_back(nums[i]);
//             }
//         }
//         return max(solution(temp1),solution(temp2));
//     }
// };