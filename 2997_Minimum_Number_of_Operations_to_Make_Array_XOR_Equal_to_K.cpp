class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i <= 20; i++){
            int xorVal = 0;
            for(int element : nums){
                int bitVal = (1<<i) & element;
                xorVal ^= bitVal;
            }
            int kBitVal = (1<<i) & k;
            if(xorVal != kBitVal) ans++;
        }
        return ans;
    }
};
