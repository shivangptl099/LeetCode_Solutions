class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int l = 0;
        int h = nums.size() - 1;
        while(l <= h){
            mid = l + ((h - l) / 2);
            if(target == nums[mid]){
                return mid;
            }
            else if(nums[mid] >= nums[l]){
                if(target >= nums[l] && target <= nums[mid]){
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if(target > nums[mid] && target <= nums[h]){
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
        }
        return -1;
    }
};
