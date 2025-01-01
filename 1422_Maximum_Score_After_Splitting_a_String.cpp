class Solution {
public:
    int maxScore(string s) {
        int ones = 0, zeros = 0;
        for(char c : s) if(c == '1') ones++;
        if(s[0] == '1') ones--;
        else zeros++;
        int ans = zeros + ones;
        for(int i = 1; i < s.length() - 1; i++){
            if(s[i] == '0') zeros++;
            else ones--;
            ans = max(ans, zeros + ones);
        }
        return ans;
    }
};
