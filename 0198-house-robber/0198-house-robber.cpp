class Solution {
public:
    int robber( vector<int>&nums , vector<int>&dp , int n )
    {
        if ( n == 0)
          return nums[n];

        if ( n == 1)
           return nums[n];  
        
        if ( dp[n] != -1 )
           return dp[n];

        int pick = nums[n] + robber(nums, dp, n - 2);
        int notPick = robber(nums, dp, n - 1);

        return dp[n] = max(pick, notPick);
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp( n , -1);
       return robber(nums , dp , n - 1);

    }
};