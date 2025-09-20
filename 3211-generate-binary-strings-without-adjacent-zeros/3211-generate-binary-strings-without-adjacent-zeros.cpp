class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string>ans;
        if ( n == 0)
          return ans ;
        ans.push_back("0");
        ans.push_back("1");

        if ( n == 1)
            return ans;

        for ( int i = 2 ; i <= n ; i++)
        {
            vector<string>res;

            for ( int j = 0 ; j < ans.size() ; j++)
            {
                if ( ans[j].back() == '1')
                {
                    res.push_back(ans[j] + "1");
                    res.push_back(ans[j] + "0");
                }

                else 
                   res.push_back(ans[j] + "1");
            }
            ans = res;
        }    

        return ans;
    }
};