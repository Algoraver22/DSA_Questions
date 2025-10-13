class Solution {
public:
   
    int maximumDifference(vector<int>& nums) {
        int n =  nums.size();
        vector<int>suff(n);
        suff[ n - 1] = nums[ n - 1];
        int ans = INT_MIN;
      
        for ( int i = n - 2 ; i >= 0 ; i--)
        {
            suff[i] = max ( nums[i] , suff[ i + 1]);
        }
       for ( int i = 0 ; i < nums.size() - 1 ; i++)
       {
        ans = max ( ans , suff[ i + 1] - nums[i] );
         
       }

       if ( ans <= 0 )
         return -1;

       else 
         return ans;  
    }
};