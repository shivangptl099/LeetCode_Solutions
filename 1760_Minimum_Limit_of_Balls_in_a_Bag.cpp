class Solution {
public:
    bool help(vector<int>& nums, int mid, int maxOp){
        int op = 0;
        for(int x : nums){
            if(x > mid) op += ceil((double)(x - mid) / mid);
            if(op > maxOp) return false;
        }
        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l = 1, h = INT_MIN, ans = INT_MAX;
        h = *max_element(nums.begin(), nums.end());
        while(l <= h){
            int mid = l + ((h - l) / 2);
            if(help(nums, mid, maxOperations)){
                ans = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
