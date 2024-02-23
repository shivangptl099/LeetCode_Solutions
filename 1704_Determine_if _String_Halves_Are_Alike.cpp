class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1 = 0;
        int c2 = 0;
        int i = 0;
        for(; i < (s.length()/2); i++){
            if(toupper(s[i]) == 'A' || toupper(s[i]) == 'E' || toupper(s[i]) == 'I' || toupper(s[i]) == 'O' || toupper(s[i]) == 'U'){
                c1++;
            }
        }
        for(i = s.length() / 2; i < s.length(); i++){
            if(toupper(s[i]) == 'A' || toupper(s[i]) == 'E' || toupper(s[i]) == 'I' || toupper(s[i]) == 'O' || toupper(s[i]) == 'U'){
                c2++;
            }
        }
        if(c1 == c2){
            return true;
        } else {
            return false;
        }
    }
};
