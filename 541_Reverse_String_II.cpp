class Solution {
public:
    string reverse(string s){
        string result = "";
        for(char c : s)
            result = c + result;
        return result;
    }
    string reverseStr(string s, int k) {
        string ans;
        int doubleSize = 2 * k;
        int i = k;
        ans += reverse(s.substr(0,k));
        while(i < s.length()){
            if(i % doubleSize == 0){
                ans += reverse(s.substr(i,k));
                i += k;
            }
            else ans += s[i++];
        }
        return ans;
    }
};
