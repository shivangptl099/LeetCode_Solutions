class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans, mx = 0, secondMax = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] > mx){
                secondMax = mx;
                mx = nums[i];
                ans = i;
            } else if(nums[i] > secondMax){
                secondMax = nums[i];
            }
        }
        return secondMax > mx / 2 ? -1 : ans;
    }
};
