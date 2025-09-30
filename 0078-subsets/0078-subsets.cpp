class Solution {
public:
    void res( int index , vector<int>& nums , vector<vector<int>>&ans , vector<int>& temp)
    {
        if ( index >= nums.size())
        {
            ans.push_back(temp);
            return ;
        }
        temp.push_back(nums[index]);
        res(index + 1 , nums , ans , temp);

        temp.pop_back();
        res(  index +  1 , nums , ans , temp ) ;



    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        res( 0 , nums , ans , temp);

        return ans;
    }
};