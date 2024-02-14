class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int i = 0;
        while(i < nums.size())
        {
            string s = to_string(nums[i]);
            int j = 0;
            while(j < s.length())
            {
                ans.push_back(s[j] - '0');
                j++;
            }
            i++;
        }
        return ans;
    }
};
