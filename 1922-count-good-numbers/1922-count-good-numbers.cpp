class Solution {
public:
    long long powerFun( long long base , long long e ,long long mod)
    {
       long long res = 1;

       while ( e > 0)
       {
        if ( e % 2 == 1) res = ( res * base) % mod ;
        base = ( base * base) % mod;

         e = e/2; 
       }

       return res;
    }
    long long countGoodNumbers(long long n) {
       const long long mod = 1e9+7;

       long long even = ( n + 1) / 2;
       long long odd = n / 2;

       long long Even = powerFun( 5 , even , mod);
       long long Odd = powerFun( 4 , odd , mod); 

       return ( Even * Odd) % mod;
    }
};