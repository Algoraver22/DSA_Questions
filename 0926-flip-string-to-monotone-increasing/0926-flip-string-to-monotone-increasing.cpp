class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int count1 = 0;
        int flips = 0 ;

        for ( auto &ch : s)
        {
            if ( ch == '1')
              count1++;

            else {
                flips = min ( flips + 1 , count1);
            } 
        }
        return flips;
    }
};