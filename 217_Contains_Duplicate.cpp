class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[nums[0]] = 1;
        int i = 1;
        while(i < nums.size()){
            auto it = mp.find(nums[i]);
            if(it != mp.end()){
                return true;
            }
            else{
                mp[nums[i]] = 1;
            }
            i++;
        }
        return false;
    }
};
