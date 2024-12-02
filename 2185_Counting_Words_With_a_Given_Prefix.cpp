class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.length(), ans = 0;
        for(string s : words){
            if(s.substr(0,n) == pref) ans++;
        }
        return ans;
    }
};
