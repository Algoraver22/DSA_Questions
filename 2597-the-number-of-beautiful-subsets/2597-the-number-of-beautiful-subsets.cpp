class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int count = 0 ;
        int n = nums.size();
        int subsets = (1 << n) - 2;

        if ( n == 1)
          return 1;


        for ( int i = 0 ; i < nums.size() ; i++)
        {
            
            for ( int j = i + 1 ; j < nums.size() ; j++)
            {
                if ( abs( nums [i] - nums [j] ) == k)
                  count++;
            }
        }
        return subsets - count;
    }
};