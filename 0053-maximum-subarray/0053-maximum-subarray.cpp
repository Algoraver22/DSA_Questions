class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];     
        int prefix = nums[0];  

        for (int i = 1; i < nums.size(); i++) {
            prefix = max(nums[i], prefix + nums[i]); 
            maxi = max(maxi, prefix);             
        }

        return maxi;
    }
};
