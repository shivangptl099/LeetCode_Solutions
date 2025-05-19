class Solution {
public:
    string triangleType(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       if(nums[0] + nums[1] <= nums[2]) return "none";
       set<int> mySet;
       for(int x : nums) mySet.insert(x);
       if(mySet.size() == 1) return "equilateral";
       else if(mySet.size() == 2) return "isosceles";
       return "scalene";
    }
};
