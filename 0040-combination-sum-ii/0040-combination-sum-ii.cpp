void findSum(int index , vector<int>&arr , int tar , vector<vector<int>>&nsa , vector<int>&dsa)
{ if (tar == 0) {
            nsa.push_back(dsa);
            return;
        }

        if (index >= arr.size()) return;

     if(arr[index]<= tar)
    {
        dsa.push_back(arr[index]);
    findSum(index+1 , arr, tar - arr[index] , nsa , dsa);
    dsa.pop_back();
    }
    //* pick
  int nextIndex = index + 1;
  while(nextIndex< arr.size() && arr[nextIndex] == arr[index])
  {
    nextIndex++;
  }

     findSum(nextIndex  , arr, tar , nsa , dsa);
}
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
         sort(candidates.begin(), candidates.end());
        findSum(0 , candidates , target , ans , ds);
        return ans;
        
    }
};