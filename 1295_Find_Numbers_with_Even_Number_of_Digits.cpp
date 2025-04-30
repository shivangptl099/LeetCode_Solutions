class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int num : nums){
            string s = to_string(num);
            if(s.length() % 2 == 0) ans++;
        }
        return ans;
    }
};
