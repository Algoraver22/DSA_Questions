class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        vector<int>arr(n,0);
        int mark = 0;
        for ( int i = 0 ; i < n ; i++)
        {
            for ( int j = 0 ; j < n ; j++)
            {
                if ( fruits[i] <= baskets[j] && arr[j] != 1)
                {
                    
                        arr[j] = 1;
                   
                    mark++;
                    break;
                }
            }
        }
        return n-mark;
    }
};