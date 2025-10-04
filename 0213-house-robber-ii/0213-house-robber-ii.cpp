class Solution {
public:
   
     int robber2 ( vector<int>&nums , vector<int>&dp, int n)
    {
        if ( n == 0)
          return nums[n];
        if ( n == 1)
          return max( nums[n] , nums[ n - 1]);

        if ( dp[n] != -1)
          return dp[n];

        int pick = nums[n] + robber2( nums , dp , n - 2);
        int np = robber2( nums , dp , n - 1);
        return dp[n] = max(pick, np);


          
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
       
           vector<int> temp1(nums.begin(), nums.end() - 1); 
        vector<int> temp2(nums.begin() + 1, nums.end());
          vector<int> dp1(temp1.size(), -1);
        vector<int> dp2(temp2.size(), -1);
          int ans1 = robber2(temp1, dp1, temp1.size() - 1);
        int ans2 = robber2(temp2, dp2, temp2.size() - 1);
        return max(ans1, ans2);
    }
};