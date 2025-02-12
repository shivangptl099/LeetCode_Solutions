class Solution {
public:
    int digitSum(int n){
        int ans = 0;
        while(n > 0){
            ans += (n % 10);
            n /= 10;
        }
        return ans;
    }
    int maximumSum(vector<int>& nums) {     
        int ans = -1;   
        unordered_map<int, int> mp;
        for(int x : nums){
            int y = digitSum(x);
            if(mp.find(y) != mp.end()) ans = max(ans, mp[y] + x);
            mp[y] = max(mp[y], x);
        }
        return ans;
    }
};
