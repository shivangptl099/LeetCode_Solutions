class Solution {
public:
    string makeGood(string s) {
        int i = 1;
        while(i < s.length()){
            if(s[i - 1] != s[i] && tolower(s[i]) == tolower(s[i - 1])){
                string s1 = s.substr(0, i - 1);
                string s2 = s.substr(i + 1, s.length() - i - 1);
                s = s1 + s2;
                i = 1;
            } else i++;
        }
        return s;
    }
};
