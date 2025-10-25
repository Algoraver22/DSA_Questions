class Solution {
public:
     bool isvowel(char ch) {
        ch = tolower(ch); 
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
         int i=0;
        int j = 0;
        int count = 0 ;
        int maxv = 0;
        int n = s.length();
        
        while ( j < n)
        {
            if ( isvowel(s[j]))
            {
               count++;
            }
            if ( j - i + 1 == k)
            {
                maxv = max( maxv , count);
                if ( isvowel(s[i]))
                  count--;

                i++;  
            }
            j++;
        }
        return maxv;
    }
};