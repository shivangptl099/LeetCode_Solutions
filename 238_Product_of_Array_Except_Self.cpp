class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n),right(n),ans(n);
        long int leftProd = 1;
        left[0] = 1;
        for(int i = 1; i < n; i++){
            leftProd *= nums[i - 1];
            left[i] = leftProd;
        }
        long int rightProd = 1;
        right[n - 1] = 1;
        for(int i = n - 2; i >= 0; i--){
            rightProd *= nums[i + 1];
            right[i] = rightProd;
        }
        for(int i = 0; i < n; i++){
            ans[i] = left[i] * right[i];
        }
        return ans;
    }
};
