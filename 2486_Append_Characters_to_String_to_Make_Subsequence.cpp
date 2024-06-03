class Solution {
public:
    int appendCharacters(string s, string t) {
        int matchingChars = 0;
        int i = 0, j = 0, l = t.length();
        while(i < s.length() && j < l){
            if(s[i] == t[j]){
                j++;
                matchingChars++;
            }
            i++;
        }
        if(matchingChars == l) return 0;
        else return l - matchingChars;
    }
};
