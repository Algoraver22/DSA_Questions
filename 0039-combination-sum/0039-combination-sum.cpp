void findSum(int index , vector<int>&arr , int tar , vector<vector<int>>&nsa , vector<int>&dsa)
{
    if(index == arr.size())
    {
        if(tar== 0)
        {
            nsa.push_back(dsa);
        }
        return;
    }
   
    if(arr[index]<= tar)
    {
        dsa.push_back(arr[index]);
    findSum(index , arr, tar - arr[index] , nsa , dsa);
    dsa.pop_back();
    }

     findSum(index +1 , arr, tar , nsa , dsa);
}
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
       vector<int>ds;
       findSum(0 , candidates , target , ans , ds);
       return ans; 
    }
};