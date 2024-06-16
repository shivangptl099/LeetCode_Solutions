class Solution {
public:
    bool isPrime(int n){
        if(n == 1) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;
        int div = 3;
        while(div * div <= n){
            if(n % div == 0) return false;
            div += 2;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        while(!isPrime(nums[s])) s++;
        while(!isPrime(nums[e])) e--;
        return e - s;
    }
};
