class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       int i,j;
       for(i = 0; i < nums.size() - 1; i++){
           j = i + 1;
           while(j < nums.size() && j <= i + k){
               if(nums[i] == nums[j]) return true;
               j++;
           }
       } 
       return false;
    }
};
