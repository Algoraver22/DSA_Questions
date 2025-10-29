class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        
        for (int i = 0; i < nums.size(); i++) {
            // If number already in window → duplicate found within k distance
            if (window.find(nums[i]) != window.end()) {
                return true;
            }

            window.insert(nums[i]);

            // Maintain window size ≤ k
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }
        return false;
    }
};
