class Solution {
public:
    long long minimumSteps(string s) {
        long long l = 0;
        while(s[l] != '1' && l < s.length()) l++;
        long long r = l + 1, ans = 0;
        while(r < s.length()){
            if(s[r] == '0'){
                ans += r - l;
                l++;
            }
            r++;
        }
        return ans;
    }
};
