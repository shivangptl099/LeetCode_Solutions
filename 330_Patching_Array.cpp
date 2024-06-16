class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long patches = 0, i = 0, miss = 1;
        while(miss <= n){
            if(i < nums.size() && nums[i] <= miss){
                miss += nums[i];
                i++;
            }
            else {
                miss += miss;
                patches++;
            }
        }
        return patches;
    }
};
