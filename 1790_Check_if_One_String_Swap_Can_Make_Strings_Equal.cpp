class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        int x = INT_MAX, y = INT_MAX, mismatches = 0;
        for(int i = 0; i < s1.length(); i++){
            if(s1[i] != s2[i]){
                mismatches++;
                if(mismatches > 2) return false;
                if(x == INT_MAX) x = i;
                else y = i;
            }
        }
        if(mismatches < 2) return false;
        if(s1[x] != s2[y] || s2[x] != s1[y]) return false;
        return true;
    }
};
