// My Solution 26ms
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


// Optimized Solution 19ms
class Solution {
public:
    int minimumLength(string s) {
        int i = 0,e = s.length() - 1;
        while(i < e && s[i] == s[e]){
            char c = s[i];
            while(i <= e && s[i] == c) i++;
            while(i <= e && s[e] == c) e--;
        }
        return e - i + 1;
    }
};
