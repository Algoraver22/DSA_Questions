class Solution {
public:
    void permo(vector<int>& nums, vector<vector<int>>& ans, vector<int>& used, vector<int>& temp, int index)
    {
       
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (used[i] == 0) {
                used[i] = 1;
                temp.push_back(nums[i]);

                
                permo(nums, ans, used, temp, index + 1);

              
                temp.pop_back();
                used[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> used(nums.size(), 0);

        permo(nums, ans, used, temp, 0);
        return ans;
    }
};
