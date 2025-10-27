class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int r = 0;
        int l = 0;
        int maxlen = 0;
       unordered_map<char, int> mpp; 

        
        while ( r < s.size())
        {
          if (mpp.find(s[r]) != mpp.end() && mpp[s[r]] < 1)

            {
                mpp[s[r]]++;
               maxlen = max(maxlen , r - l + 1);
                r++;

            }
            
            else{
                while (mpp[s[r]] > 0) {
                   mpp[s[l]]--;
                   l++;
                                       }
            }
        }
        return maxlen;
    }
};