class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //     int n = nums.size();
    //     set<vector<int>>st;
    //     for ( int i = 0 ; i < n ; i++)
    //     {
    //         set<int>hashset;
            
    //         for ( int j = i + 1 ; j < n ; j++)
    //         {
    //             int third = -(nums[i] + nums[j]);
    //             if ( hashset.find(third) != hashset.end())
    //             {
    //                 vector<int>ans{nums[i] , nums[j] , third};
    //                 sort( ans.begin() , ans.end());
    //                 st.insert(ans);
    //             }
    //             hashset.insert(nums[j]);

    //         }
    //     }
    //     vector<vector<int>>ANS(st.begin() , st.end());

    //     return ANS;
    // }

    vector<vector<int>>ans;
     int n = nums.size();
     sort( nums.begin() , nums.end());
    for ( int i = 0 ; i < n ; i++)
    {
        if ( i > 0 && nums[i] == nums[i-1])
          continue;

        int j = i + 1;
        int k = n-1;

        while ( j < k ) 
        {
            int sum = nums[i] + nums[j] + nums[k];
            if ( sum == 0)
            {
                vector<int>st{ nums[i] , nums[j] , nums[k]};
                ans.push_back(st);
                j++;
                k--;
            }
            else if ( sum < 0) j++;
            else
                 k--;
            
            while ( j < k && nums[j] == nums[j - 1])
             j++;

            while ( j < k && k < n -1 && nums[k] == nums[k+1])
              k--; 
            
        } 

    }
        return ans;
    }
};