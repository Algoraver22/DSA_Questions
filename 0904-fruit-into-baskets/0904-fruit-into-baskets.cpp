class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // unordered_map<int , int >mpp;
        // int l = 0;
        // int r =0;
        // int maxlen = 0;

        // while ( r < fruits.size())
        // {
        //      mpp[fruits[r]]++;
        //     while (mpp.size() > 2) {
        //         mpp[fruits[l]]--;
        //         if (mpp[fruits[l]] == 0)
        //             mpp.erase(fruits[l]);
        //         l++;
        //     }
        //     maxlen = max ( maxlen , r- l + 1);
        //     r++;
        // }
        // return maxlen;
        int l =0;
        int r =0 ;
        int maxlen = 0;
         int count = 0;
         unordered_map<int , int >mpp;
         int n = fruits.size();

         while ( r < n)
         {
            
                if (mpp.find(fruits[r]) == mpp.end())

                {
                    count++;

                }
                   mpp[fruits[r]]++;
                while (count > 2) {
                mpp[fruits[l]]--;
                if (mpp[fruits[l]] == 0)
                    count--;
                l++;
            }
                maxlen = max ( maxlen , r - l + 1);
            
            r++;
         }
         return maxlen ;
    }
};