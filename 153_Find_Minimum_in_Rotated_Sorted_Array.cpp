class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 2) return min(nums[0],nums[1]);
        int min = nums[0];
        int l = 0;
        int h = nums.size() - 1;
        while(l <= h){
            int mid = l + ((h - l)/2);
            if(nums[mid] > min){
                l = mid + 1;
            }
            else {
                min = nums[mid];
                h = mid - 1;
            }
        }
        return min;
    }
};
