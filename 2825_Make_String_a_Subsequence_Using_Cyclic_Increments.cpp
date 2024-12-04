class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0, m = str1.length(), n = str2.length();
        while(i < m){
            if(str1[i] == str2[j] || 'a' + ((str1[i] - 'a' + 1) % 26) == str2[j]){
                j++;
                if(j == n) return true;
            }
            i++;
        }
        return false;
    }
};
