class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans(2);

        int wholeXOR = 0;
        for(int val : nums)
            wholeXOR ^= val;

        unsigned int rmsb = wholeXOR & (-(unsigned int)wholeXOR);
        int x = 0;
        int y = 0;

        for(int val : nums)
            if((rmsb & val) == 0) x ^= val;
            else y ^= val;
        ans[0] = x;
        ans[1] = y;
        return ans;
    }
};
