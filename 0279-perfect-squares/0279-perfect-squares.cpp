class Solution {
public:
    int helper ( int n , vector<int>&nums )
    {
        if ( n == 0 )
          return 0;

        if ( nums[n] != -1)
          return nums[n];
        
        int mincount = INT_MAX;
        for ( int i = 1 ; i*i <= n ; i++)
        {
           int result = 1 + helper ( n - i*i , nums);
           mincount = min ( mincount , result);

        }    
        return nums[n] = mincount;
    }
    int numSquares(int n) {
        vector<int> nums( n + 1 , -1);
        return helper( n , nums );
    }
};