class Solution {
public:
    void updateBits(vector<int>& bits, int no, int val){
        for(int i = 0; i < 32; i++){
            if(no & (1<<i)){
                bits[i] += val;
            }
        }
    }
    int getNumber(vector<int>& bits){
        int number = 0;
        long long pow = 1;
        for(int i = 0; i < 32; i++){
            if(bits[i] > 0){
                number += pow;
            }
            pow *= 2;
        }
        return number;
    }
    int minimumSubarrayLength(vector<int>& nums, int k) {
        if(k == 0) return 1;
        int n = nums.size(), ans = INT_MAX;
        int l = 0, r = 0;
        int currOR = 0;
        vector<int> bits(32);
        while(r < n){
            updateBits(bits, nums[r], 1);
            currOR |= nums[r];
            while(l <= r && currOR >= k){
                ans = min(ans, r - l + 1);
                updateBits(bits, nums[l], -1);
                currOR = getNumber(bits);
                l++;
            }
            r++;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
