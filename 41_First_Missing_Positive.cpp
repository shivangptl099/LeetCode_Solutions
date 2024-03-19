// Optimized Solution (Time Complexity : O(n) & Space Complexity : O(1))
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; ++i)
            if(nums[i] <= 0) nums[i] = 0;
        for(int i = 0; i < n; ++i)
            while(nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1])
                swap(nums[i], nums[nums[i] - 1]);
        for(int i = 0; i < n; ++i)
            if(nums[i] != i + 1) return i + 1;
        return n + 1;
    }
};

// First Logic Solution (Time Complexity : O(nlogn) & Space Complexity : O(1))
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++)
            if(nums[i] < 0) nums[i] = 0;
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < n && nums[i] == 0) i++;
        if(i == n) return 1;
        int temp = 1;
        for(i ; i < n; i++){
            if(nums[i] != temp) return temp;
            else{
                while(i < n && nums[i] == temp) i++;
                i--;
            }
            temp++;
        }
        return temp;
    }
};
