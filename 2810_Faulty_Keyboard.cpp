class Solution {
public:
    string finalString(string s) {
        int i = 0;
        int n = s.length();
        string ans = "";
        while(i < n)
        {
            if(s[i] == 'i')
            {
                reverse(ans.begin(), ans.end());
            }
            else
            {
                ans += s[i];
            }
            i++;
        }
        return ans;
    }
};
