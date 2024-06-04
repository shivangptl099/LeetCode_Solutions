class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int ans = 0;
        int isOdd = 0;
        for(char c : s){
            mp[c]++;
        }
        for(auto it : mp){
            if(it.second % 2 == 0){
                ans += it.second;
            } else {
                isOdd = 1;
                if(it.second > 1){
                    ans += (it.second - 1);
                }
            }
        }
        return ans + isOdd;
    }
};
