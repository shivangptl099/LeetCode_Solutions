class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0,j = 0,ans = 0;
        unordered_map<char,int> mp;
        while(j < s.length()){
            if(mp.find(s[j]) != mp.end()){
                ans = max(ans, j - i);
                while(s[i] != s[j]) {
                    mp.erase(s[i]);
                    i++;
                }
                mp.erase(s[i]);
                i++;
            }
            mp[s[j]] = j;
            j++;
        }
        ans = max(ans, j - i);
        return ans;
    }
};
