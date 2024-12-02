class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0;
        for(string x : words){
            if(x == s.substr(0, x.length())) ans++;
        }
        return ans;
    }
};
