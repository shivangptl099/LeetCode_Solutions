class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        int i = 0;
        while(i < s.length()){
            if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90)){
                s1 += tolower(s[i]);
            }
            else if(s[i] >= 48 && s[i] <= 57){
                s1 += s[i];
            }
            i++;
        }
        i = 0;
        int j = s1.length() - 1;
        while(i < j){
            if(s1[i] != s1[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
