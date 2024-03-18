class Solution {
public:
    int countKeyChanges(string s) {
        char prev = tolower(s[0]);
        int ans = 0;
        int i = 1;
        while(i < s.length()){
            char c = tolower(s[i]);
            if(prev != c){
                ans++;
                prev = c;
            }
            i++;
        }
        return ans;
    }
};
