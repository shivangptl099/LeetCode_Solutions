class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int max = 0;
        int prev = nums[0];
        int count = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == prev) {
                continue;
            }
            if(nums[i] - 1 == prev){
                prev = nums[i];
                count++;
            }
            else{
                if(max < count){
                    max = count;
                }
                count = 1;
                prev = nums[i];
            }
        }
        if(count > max) {
            max = count;
        }
        return max;
    }
};
