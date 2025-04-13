class Solution {
public:
    #define LL long long
    int mod = 1e9 + 7;
    LL binaryExponentiation(LL a, LL b){
        LL ans = 1;
        while(b){
            if(b & 1) ans = (ans * a) % mod;
            a = (a * a) % mod;
            b /= 2;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        return (binaryExponentiation(4, n / 2) * 
               binaryExponentiation(5, n - (n / 2))) % mod;
    }
};
