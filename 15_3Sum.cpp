class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i = 0; i < n - 2; i++){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int target = 0 - nums[i];
                int s = i + 1;
                int e = n - 1;
                while(s < e){
                    if(nums[s] + nums[e] < target){
                        s++;
                    }
                    else if(nums[s] + nums[e] > target){
                        e--;
                    } else {
                        ans.push_back({nums[i],nums[s],nums[e]});
                        s++;
                        e--;
                        while (s < e && nums[s] == nums[s - 1]){
                            s++;
                        }
                        while (s < e && nums[e] == nums[e + 1]){
                            e--;
                        }
                    }
                }
            while (i < n - 2 && nums[i] == nums[i + 1]){
                i++;
            }
        }
        return ans;
    }
};
