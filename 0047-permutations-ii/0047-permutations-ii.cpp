class Solution {
public:
    void permo ( vector<int>&nums , vector<vector<int>>&ans , vector<int>&temp , vector<int>&used , int index)
    {
        if ( temp.size() == nums.size())
        {
            ans.push_back(temp);
            return ;
        }
        for ( int i = 0 ; i < nums.size() ; i++)
        {
             if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == 0)
                    continue;
            if ( used[i] == 0)
            {
                temp.push_back(nums[i]);
                used[i] = 1;
                
              permo( nums , ans , temp , used , index +  1);

                temp.pop_back();
                used[i] = 0;
 
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>temp;
        vector<int>used( nums.size() , 0);
        vector<vector<int>>ans;
         sort(nums.begin(), nums.end());
         
         permo( nums, ans , temp , used , 0);
        return ans;
    }
};