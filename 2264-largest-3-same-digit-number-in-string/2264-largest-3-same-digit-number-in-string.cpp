class Solution {
public:
    string largestGoodInteger(string num) {
        char maxchar = ' ';
        bool found = false;

        for ( int i = 2 ; i < num.length() ; i++)
        {
           if (num[i] == num[i - 1] && num[i] == num[i - 2]) {
                maxchar = max(maxchar, num[i]);
                found = true;
            } 
        }
         if (!found) return "";
        string s = "";
        int j = 3;
        while ( j > 0)
        {
          s += maxchar;

           j--;
        }
        return s;
    }
};