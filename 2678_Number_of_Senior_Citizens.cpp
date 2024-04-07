class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(string s : details)
            if((s[11] - '0' > 6) || (s[11] - '0' == 6 && s[12] - '0' > 0)) ans++;
        return ans;
    }
};
