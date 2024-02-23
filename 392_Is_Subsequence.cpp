class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == "" && t == "") return true;
        int count = 0;
        int i = 0;
        int j = 0;
        while(i < t.length()){
            if(s[j] == t[i]){
                j++;
            }
            if(j == s.length()){
                return true;
            }
            i++;
        }
        return false;
    }
};
