class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        queue<int> q;
        k %= nums.size();
        int i = nums.size() - k;
        while(i < nums.size())
        {
            q.push(nums[i]);
            i++;
        }
        i = 0;
        int n = nums.size() - k;
        while(i < n)
        {
            q.push(nums[i]);
            i++;
        }
        i = 0;
        while(i < nums.size())
        {
            nums[i] = q.front();
            q.pop();
            i++;
        }
    }
};
