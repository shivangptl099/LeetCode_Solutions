class Solution {
public:
    bool isPrime(int n){
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        int div = 3;
        while(div*div <= n){
            if(n % div == 0) return false;
            div += 2;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            int x = nums[i][i];
            int y = nums[i][n - 1 - i];
            if(ans > x && ans > y) continue;
            if(isPrime(x)) ans = max(ans, x);
            if(isPrime(y)) ans = max(ans, y);
        }
        return ans;
    }
};
