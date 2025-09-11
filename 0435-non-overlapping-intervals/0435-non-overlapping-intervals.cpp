class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         
        vector<vector<int>>ans;
         for (int i = 0; i < intervals.size(); i++) {
        int start = intervals[i][0];  
        int end   = intervals[i][1]; 
        ans.push_back({end , start}); 
       
    }
        sort(ans.begin() , ans.end());
        
        int freetime = ans[0][0];
        int count = 1;
        
        for ( int i = 1; i < intervals.size() ; i++)
        {
            if ( ans[i][1] >= freetime){
               count++;
               freetime = ans[i][0];
            }
        }
        int ans1 = intervals.size() - count ;
        return ans1;
        
    }
};