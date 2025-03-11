class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0, right = 0, ans = 0;
        unordered_map<int, int> mp;
        while(right < s.length()){
            mp[s[right]]++;
            while(mp.size() == 3){
                ans += s.length() - right;
                if(--mp[s[left]] == 0) mp.erase(s[left]);
                left++;
            }
            right++;
        }
        return ans;
    }
};
