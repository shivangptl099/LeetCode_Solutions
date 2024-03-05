class Solution {
public:
    int minimumLength(string s) {
        int i = 0,e = s.length() - 1,j,k;
        while(i < e && s[i] == s[e]){    
            char c = s[i];
            j = i + 1;
            while(j < e && s[j] == c) j++;
            if(j == e) return 0;
            k = e - 1;
            while(s[k] == c) k--;
            i = j;
            e = k;
        }
        return e - i + 1;
    }
};
