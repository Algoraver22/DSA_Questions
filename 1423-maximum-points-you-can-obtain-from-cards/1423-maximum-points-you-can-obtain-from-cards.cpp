class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int ri = n - 1 ;
        int ls= 0 ;
        int rs = 0;
        int maxs = 0 ;
           
        if ( k == n) {
            for ( auto c : nums)
            maxs += c;
          return maxs;  
        }
        for ( int i = 0 ; i < k ;i++)
        {
          ls += nums[i];
        }
        maxs = ls;

        for ( int i = k -1 ; i >= 0 ; i--)
        {
            ls = ls - nums[i];
            rs = rs + nums[ri];
            ri = ri - 1 ;
            maxs = max ( maxs , ls + rs);
        }
 return maxs;
    }
};