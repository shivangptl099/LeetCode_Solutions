class Solution {
    #define p pair<int, int>
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char, p> mp;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(mp.find(s[i]) == mp.end()) mp[s[i]].first = mp[s[i]].second = i;
            else mp[s[i]].second = i;
        }
        int ans = 0;
        for(auto [c, se] : mp){
            if(se.first == se.second) continue;
            ans += unordered_set<char>(s.begin() + se.first + 1, s.begin() + se.second).size();
        }
        return ans;
    }
};
