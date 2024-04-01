class Solution {
public:
    int lengthOfLastWord(string s) {
        int e = s.length() - 1;
        while(e >= 0 && s[e] == ' ') e--;
        int j = e;
        while(e >= 0 && s[e] != ' ') e--;
        return j - e;
    }
};
