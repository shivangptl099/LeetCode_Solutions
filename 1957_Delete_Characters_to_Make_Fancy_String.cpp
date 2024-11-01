class Solution {
public:
    string makeFancyString(string s) {
        int c = 1, i = 1;
        char last = s[0];
        string ans;
        ans += s[0];
        while(i < s.length()){
            if(last == s[i]){
                c++;
            } else {
                c = 1;
                last = s[i];
            }
            if(c <= 2) ans += s[i];
            i++;
        }
        return ans;
    }
};
