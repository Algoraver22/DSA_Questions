class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int minsum = 0;
        int len = INT_MAX;
        int n = nums.size();

        while ( r < n )
        {
          minsum += nums[r];

          while ( minsum >= target)
          {
            len = min ( len , r - l + 1);
            minsum = minsum - nums[l];
            l++;
          }
          r++;
        }
        if (len == INT_MAX)
    return 0;
else  
    return len;
 
    }
};